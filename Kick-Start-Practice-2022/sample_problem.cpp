#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tt;
    cin >> tt;

    int C = 1;

    while (tt--) {

        int n, k;
        cin >> n >> k;

        int sum = 0;

        for (int i = 0; i < n; i++) {
            int candy;
            cin >> candy;

            sum += candy;
        }

        cout << "Case #" << C++ << ": " << sum % k << '\n';
    }
}