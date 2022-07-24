#include <bits/stdc++.h>
using namespace std;


int main()
{
    int tt;
    cin >> tt;

    while(tt--){
        int dsa1, toc1, dm1;
        cin >> dsa1 >> toc1 >> dm1;

        int dsa2, toc2, dm2;
        cin >> dsa2 >> toc2 >> dm2;

        int sum1 = dsa1 + toc1 + dm1;
        int sum2 = dsa2 + toc2 + dm2;

        string ans = "TIE";

        if(sum1 > sum2){
            ans = "DRAGON";
        }
        else if(sum1 < sum2){
            ans = "SLOTH";
        }
        else if(sum1 == sum2){
            if(dsa1 > dsa2){
                ans = "DRAGON";
            }
            else if(dsa1 < dsa2){
                ans = "SLOTH";
            }
            else{
                if(toc1 > toc2){
                ans = "DRAGON";
                }
                else if(toc1 < toc2){
                    ans = "SLOTH";
                }
            }
        }


        cout << ans << '\n';

    }
}