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

        int e = 0, o = 0;

        for (int i = 0; i < n; i += 2)
        {
            if (a[i] % 2 == 0) {
                e++;
            }
            else {
                o++;
            }
        }

        bool ans = false;

        if (e == 0 || o == 0) {

            int p = 0, q = 0;

            for (int i = 1; i < n; i += 2)
            {
                if (a[i] % 2 == 0) {
                    p++;
                }
                else {
                    q++;
                }
            }

            if (p == 0 || q == 0) {
                ans = true;
            }
        }

        if (ans) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
}

