#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int fib(int n){
    LL f[n];
    f[0] = 1;
    f[1] = 1;
    for(int i = 2; i <= n; i++){
        f[i] = f[i-1] + f[i-2];
    }

    for(int i = 0; i <= n; i++){
        cout << f[i] <<" ";
    }
    cout << "\n";
}

int main(int argc, char const *argv[])
{

    LL a;
    cin >> a;

    fib(a);
}
