#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int tt;
	cin >> tt;

	while (tt--) {
		int n, k;
		cin >> n >> k;

		int a[n], b[n];

		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
			b[i] = a[i];
		}

		for (int i = 0; i < n; ++i)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (i % k == j % k) {
					if (a[i] < a[j]) {
						swap(a[i], a[j]);
					}
				}
			}
		}

		long long f = 0;

		for (int i = 0; i <= n - k; ++i)
		{
			long long ans = 0;

			for (int j = i; j < i + k; ++j)
			{
				ans += a[j];
			}

			f = max(f, ans);
		}

		cout << f << '\n';
	}
	return 0;
}