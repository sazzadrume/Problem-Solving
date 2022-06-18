#include <bits/stdc++.h>
using namespace std;

int main()
{

    int tt;
    cin >> tt;

    while (tt--) {
        int n, m;
        cin >> n >> m;

        int a[n];

        int sum = 0;

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            sum += a[i];
        }

        if (m <= sum) {
            cout << sum - m << '\n';
        }
        else {
            cout << 0 << '\n';
        }
    }
}

