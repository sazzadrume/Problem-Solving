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

		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}

		int ans = 0;

		sort(a, a + n);

		if (a[n - 1] % 2 == 0) {
			ans = a[n - 1];

			for (int i = n - 2; i >= 0; i--) {
				if (a[i] % 2 == 0) {
					ans += a[i];
					break;
				}
			}
		}
		else {
			ans = a[n - 1];

			for (int i = n - 2; i >= 0; i--) {
				if (a[i] % 2 != 0) {
					ans += a[i];
					break;
				}
			}
		}

		if(n == 2 && ans % 2 != 0){
			ans = -1;
		}

		cout << ans << '\n';
	}
	return 0;
}

// 1 2 3 4