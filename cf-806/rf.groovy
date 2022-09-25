package current_scripts

import com.rdc.importer.scrapian.ScrapianContext
import com.rdc.importer.scrapian.model.StringSource
import com.rdc.importer.scrapian.util.ModuleLoader
import com.rdc.scrape.ScrapeAddress
import com.rdc.scrape.ScrapeEvent

context.setup([connectionTimeout: 20000, socketTimeout: 25000, retryCount: 1, multithread: true, userAgent: "Mozilla/5.0 (Macintosh; Intel Mac OS X 10_13_6) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/80.0.3987.163 Safari/537.36"])
context.session.encoding = "UTF-8" //change it according to web page's encoding
context.session.escape = true

Rf_banks_bik_bic_number script = new Rf_banks_bik_bic_number(context)
script.initParsing()

class Rf_banks_bik_bic_number {
    ScrapianContext context = new ScrapianContext()
    final entityType
    final def moduleFactory = ModuleLoader.getFactory("d897871d8906be0173bebbbf155199ff441dd8d3")


    Rf_banks_bik_bic_number(context) {
        entityType = moduleFactory.getEntityTypeDetection(context)
        this.context = context
    }

    def initParsing() {

        def url = "https://bankcodesfinder.com/russia-bik-numbers/all-russia-bik-number"

        def html = invoke(url)

        println(html)

        handleData(html)

//        handleHTML(html)
    }

    def counter = 1000

    def handleData(def html) {
        def hrefs = html =~ /(?ism)class.*?<div class="col-sm-4 "><a href="(.*?)"/

        while (hrefs.find()) {
            def block = hrefs.group()
            println("------------------------------------------------")
//            println(block)

            def nameFromBox = block =~ /(?ism)class=.*?h2 class=".*?">(.*?)<\/h2>/

            def name

            if (nameFromBox.find()) {
                name = nameFromBox.group(1)


                name = name.toString().replaceAll(/ /, '').trim()
                name = name.toString().replaceAll(/>/, 'dba').trim()
                name = name.toString().replaceAll(/-/, ' ').trim()

                name = counter++ + "count" + name
                println("Name : " + name)

                def url = hrefs.group(1)

                def root = "https://bankcodesfinder.com"

                url = root + url

                createEntityForChecking(name, url)

            }



//            println(url)

//            def singlePageData = invoke(url)

//            println(singlePageData)

//            def names = singlePageData =~ /<td>\d+<\/td> <td>(.*?)<\/td>/
//
//            if (names.find()) {
//                def name = names.group(1)
//                println("Name : " + name)
//                createEntityForChecking(name)
//            }
        }
    }

    def createEntityForChecking(def name, def url) {

        def entity, alias

        def eventDescription = "This entity appears on the Washington Attorney General list of published Data Breaches affecting Washington businesses, individuals, and public agencies."

        if ((!name.toString().isEmpty()) || (!name.toString().equals("")) || (!name.toString().equals(null))) {
            def type = detectEntity(name)
            entity = context.findEntity(["name": name, "type": type])

            if(name.toString().contains("dba")){
                def names = name.split("dba")
                name = names[0].toString().trim()
                alias = names[1].toString().trim()
            }

            name = name.toString().replaceAll(/\d+count/,'').trim()

            if (!entity) {
                entity = context.getSession().newEntity()
                entity.setName(name)
                entity.setType(type)
                println("Entity Name : " + name)
            }
            entity.addAlias(alias)
            ScrapeEvent event = new ScrapeEvent()

            ScrapeAddress scrapeAddress = new ScrapeAddress()
            scrapeAddress.setCountry("Russian Federation")
            entity.addAddress(scrapeAddress)

//            entity.addUrl(url)

            entity.addEvent(event)
        }
    }

    def handleHTML(def html) {

        def lastPage = html =~ /(?ism)<li class="page-numbers last">.*?page=(.*?)">last/

        def last

        if (lastPage.find()) {
            last = lastPage.group(1)
        }

        def name, url, eventDate, remark1, remark2, aliasList = []

        int last_page = Integer.parseInt(last)

        for (int i = 0; i <= last_page; i++) {
            if (i > 0) {
                def url_per_page = "https://www.atg.wa.gov/data-breach-notifications?page=" + i
                html = invoke(url_per_page)

            }
            def table = html =~ /(?ism)<table class="padded-table view-table views-table cols-5">.*<\\/table>/
            if (table.find()) {
                def tableData = table.group()

                def row = tableData =~ /(?ism)<tr class.*?<\\/tr>/


                while (row.find()) {
                    def rowData = row.group()
                    rowData = sanitizeHTML(rowData)

                    def nameCheck = rowData =~ /<a.*?>(.*?)<\\/a>/

                    if (nameCheck.find()) {
                        name = nameCheck.group(1)
                    }

                    name = name.toString().replaceAll(/\(/, "d/b/a")
                    name = name.toString().replaceAll(/\)/, "")


                    if (name.toString().contains("d/b/a")) {
                        def spliter = name.toString().split("d/b/a")
                        name = spliter[0]

                        def alias = spliter[1]

                        if (alias.toString().contains(",")) {
                            def aliasSplit = alias.split(",")
                            aliasSplit.each {
                                if (it) {
                                    aliasList.add(it)
                                }
                            }
                        } else {
                            aliasList.add(alias)
                        }
                    }

                    def urlCheck = rowData =~ /href="(.*?)"/

                    if (urlCheck.find()) {
                        url = urlCheck.group(1)
                    }

                    def eventDateCheck = rowData =~ /(?ism)<td class="views-field views-field-field-report-date">\s<span.*?>(.*?)<\\/span>/

                    if (eventDateCheck.find()) {
                        eventDate = eventDateCheck.group(1)
                    }

                    def remark1Check = rowData =~ /(?ism)<td class="views-field views-field-field-information-compromised">(.*?)<\\/td>/

                    if (remark1Check.find()) {
                        remark1 = remark1Check.group(1)
                    }

                    def remark2Check = rowData =~ /(?ism)<td class="views-field views-field-field-start-date">.*?>(.*?)<\\/span>/

                    if (remark2Check.find()) {
                        remark2 = remark2Check.group(1)
                    }

                    createEntity(name, url, eventDate, remark1, remark2, aliasList)
                    name = ""
                    url = ""
                    eventDate = ""
                    remark1 = ""
                    remark2 = ""
                    aliasList = []
                }
            }
        }
    }

    def createEntity(def name, def url, def eventDate, def remark1, def remark2, def aliasList) {

        def entity

        def eventDescription = "This entity appears on the Washington Attorney General list of published Data Breaches affecting Washington businesses, individuals, and public agencies."

        if ((!name.toString().isEmpty()) || (!name.toString().equals("")) || (!name.toString().equals(null))) {
            def type = detectEntity(name)
            entity = context.findEntity(["name": name, "type": type])
            if (!entity) {
                entity = context.getSession().newEntity()
                entity.setName(name)
                entity.setType(type)
            }

            ScrapeEvent event = new ScrapeEvent()

            if (!eventDate.toString().isEmpty()) {
                eventDate = context.parseDate(new StringSource(eventDate), ["MM/dd/yyyy"] as String[])
                event.setDate(eventDate)
            }

            aliasList.each {
                if (it) {
                    it = it.toString().replaceAll(/(?s)\s+/, " ").trim()
                    entity.addAlias(it)
                }
            }

            if (remark1) {
                remark1 = remark1.toString().replaceAll(/(?s)\s+/, " ").trim()
                entity.addRemark("Information Compromised: " + remark1)
            }

            if (remark2) {
                remark2 = remark2.toString().replaceAll(/(?s)\s+/, " ").trim()
                entity.addRemark("Date of Breach: " + remark2)
            }

            ScrapeAddress scrapeAddress = new ScrapeAddress()
            scrapeAddress.setProvince("Washington")
            entity.addAddress(scrapeAddress)

            entity.addUrl(url)
            event.setDescription(eventDescription)
            entity.addEvent(event)
        }
    }

    def detectEntity(def type) {
        type = "O"

        return type
    }

    def sanitizeHTML(def html) {
        html = html.toString().replaceAll(/amp;/, "")
        html = html.toString().replaceAll(/&#039/, "'")
        html = html.toString().replaceAll(/;/, "")
        html = html.toString().replaceAll(/America, Inc/, "America Inc")
        html = html.toString().replaceAll(/and NorGUARD Insurance Companies/, "NorGUARD Insurance Companies")
        html = html.toString().replaceAll(/dba|Dba|aka|fka/, "d/b/a")
        html = html.toString().replaceAll(/Kennewick Public Hospital District,/, "Kennewick Public Hospital District")
        html = html.toString().replaceAll(/401\(k\)/, "401k")
        html = html.toString().replaceAll(/&quot/, "")

        return html
    }

    def pdfToTextConverter(def pdfUrl) {

        def pdfFile = invokeBinary(pdfUrl)

        def pmap = [:] as Map
        pmap.put("1", "-layout")
        pmap.put("2", "-enc")
        pmap.put("3", "UTF-8")
        pmap.put("4", "-eol")
        pmap.put("5", "dos")
        // pmap.put("6", "-raw")

        def pdfText = context.transformPdfToText(pdfFile, pmap)
        return pdfText

    }


    def invokeBinary(url, type = null, paramsMap = null, cache = false, clean = false, miscData = [:]) {
        Map dataMap = [url: url, type: type, params: paramsMap, clean: clean, cache: cache]
        dataMap.putAll(miscData)
        return context.invokeBinary(dataMap)
    }

    def invoke(url, cache = false, tidy = false) {
        return context.invoke([url: url, tidy: tidy, cache: cache])
    }

}