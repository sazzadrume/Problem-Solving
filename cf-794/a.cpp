#include <bits/stdc++.h>
using namespace std;

int main()
{

    int tt;
    cin >> tt;

    while (tt--) {
        int n;
        cin >> n;

        double a[n];

        double sum = 0;

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            sum += a[i];

        }

        bool found = false;

        for (int i = 0; i < n; ++i)
        {
            if ((sum - a[i]) / (n - 1) == a[i]) {
                // cout << "Sums : ";
                // cout << (sum - a[i]) / (n - 1) << '\n';
                // cout << a[i] << '\n';
                // cout << '\n';
                found = true;
            }
        }

        if (found) {
            printf("Yes\n");
        }
        else {
            printf("No\n");
        }
    }

}


