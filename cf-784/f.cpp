#include <bits/stdc++.h>
using namespace std;

int main()
{

    int tt;
    cin >> tt;

    while (tt--) {
        int n;
        cin >> n;

        int a[n];

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        int x = 0, y = a[n - 1];

        int ans = 1;

        int q = 0, r = 1;

        for (int i = 0; i < n - 1; ++i)
        {
            if ((x < y) && (ans < n)) {
                x += a[q];
                ans++;
                q++;
            }
            else if ((y < x) && (ans < n)) {
                y += a[n - r - 1];
                ans++;
                r++;
            }
            else if ((x == y) && (ans < n)) {
                x += a[q];
                y += a[n - r - 1];
                q++;
                r++;
            }

        }

        if (x != y) {
            ans = 0;
        }

        cout << ans << '\n';
    }
}

