#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
    LL a, b;
    cin >> a >> b;

    if(a > b){
        swap(a, b);
    }

    for(LL i = b;; i+=b){
        if(i % a == 0){
            cout << i << "\n";
            return 0;
        }
    }

}
