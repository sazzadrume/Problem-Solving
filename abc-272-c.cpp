#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int testCase = 1;
	// cin >> testCase;

	while (testCase--) {
		int n;
		cin >> n;

		int a[n];

		vector<int> odd;
		vector<int> even;

		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];

			if (a[i] % 2 == 0) {
				even.push_back(a[i]);
			}
			else {
				odd.push_back(a[i]);
			}
		}

		sort(even.rbegin(), even.rend());
		sort(odd.rbegin(), odd.rend());

		int ans = -1;

		if (even.size() > 1) ans = max(ans, even[0] + even[1]);
		if (odd.size() > 1) ans = max(ans, odd[0] + odd[1]);

		cout << ans << '\n';
	}
	return 0;
}

// 1 2 3 4