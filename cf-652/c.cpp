#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int a[n];

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a, a + n);

        int b[k];

        long long ans = 0;

        for (int i = 0; i < k; i++) {
            cin >> b[i];
        }
        int e = 1;
        for (int i = 0; i < k; i++) {
            vector<int> v;
            for (int j = 0; j < b[i]; j++) {
                v.push_back(a[n - e]);
                e++;
            }
            sort(v.begin(), v.end());
            ans += v[0] + v[v.size() - 1];
        }

        cout << ans << "\n";
    }
}
