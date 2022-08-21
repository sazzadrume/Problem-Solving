#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tt;
    cin >> tt;

    int C = 1;

    while (tt--) {

        int n;
        cin >> n;

        int ans = 0;

        if (n == 1) {
            ans = 1;
        }
        else if (n == 2) {
            ans = 1;
        }
        else if (n == 3) {
            ans = 1;
        }
        else if (n == 4) {
            ans = 1;
        }
        else if (n == 5) {
            ans = 1;
        }
        else if (n == 6) {
            ans = 2;
        }
        else {
            n--;
            ans = n / 3;

            if (n % 3 == 0) {
                ans--;
            }
        }
        cout << "Case #" << C++ << ": " << ans << '\n';
    }
}