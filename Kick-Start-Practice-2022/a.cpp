#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tt;
    cin >> tt;

    int C = 1;

    while (tt--) {

        int n, m;
        cin >> n >> m;

        int a[n];

        int sum = 0;

        double ans = 0;

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            sum += a[i];
        }

        if (m == 1) {
            ans = (double) a[n / 2];
        }
        else {
            sort(a, a + n);

            int wholesome = 0;

            for (int i = n - 1; i >= m; i--) {
                wholesome += a[i];
                sum -= a[i];
            }

            cout << "Sum : " << wholesome << '\n';

            ans = (double) sum / m;

            cout << "Ans : " << ans << '\n';

            ans += wholesome;
        }

        cout << setprecision(1) << fixed;
        cout << "Case #" << C++ << ": " << ans << '\n';
    }
}