var tests = parseInt(readline());
    for (var t=0; t < tests; t++) {
        var n = parseInt(readline());
        var ans = [ n ];
        for (var i = 0; i < n-1; i++) {
            ans.push(i+1);
        }
        print(ans.join(' '));
    }