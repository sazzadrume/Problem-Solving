#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int tt;
	cin >> tt;

	while (tt--) {
		int n, k;
		cin >> n >> k;

		int a[n];

		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}

		std::vector<int> v;


		for (int i = 0; i < k; ++i)
		{
			v.push_back(a[i]);
		}

		int x = 1;

		int ans = 0;

		for (int i = 0; i < k; ++i)
		{
			ans += count(v.begin(), v.end(), x);
			x++;
		}

		// cout << k <<  ' ' << ans << '\n';

		cout << abs(k - ans) << '\n';
	}
	return 0;
}