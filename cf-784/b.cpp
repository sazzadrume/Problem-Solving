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

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }


        sort(a, a + n);

        int ans = -1, p = 0;

        for (int i = 1; i < n; i++)
        {
            if (a[i] == a[i - 1]) {
                p++;
            }
            else {
                p = 0;
            }

            if (p == 2) {
                ans = a[i];
                break;
            }
        }

        cout << ans << '\n';
    }
}

