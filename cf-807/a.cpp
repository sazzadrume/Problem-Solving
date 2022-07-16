#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int tt;
	cin >> tt;

	while (tt--) {
		int n, x;
		cin >> n >> x;

		int m = n + n;

		int a[m];

		for (int i = 0; i < m; ++i)
		{
			cin >> a[i];
		}

		bool ans = true;

		sort(a, a + m);

		for (int i = 0; i < n; ++i)
		{
			if (abs(a[i] - a[i + n]) >= x) {

			}
			else {
				ans = false;
				break;
			}
		}

		if (ans) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
	return 0;
}