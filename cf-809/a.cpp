#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int tt;
	cin >> tt;

	while (tt--) {
		int n;
		cin >> n;

		int a[n];

		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}

		int ans = 0;

		for (int i = 1; i < n - 1; ++i)
		{
			if(a[i] < a[i - 1] && a[i] < a[i + 1]){
				int val = max(a[i - 1], a[i + 1]);
				val = val - a[i] + 1;
				ans += val;
				a[i] = val + 1;
			}
		}

		cout << ans << '\n';
	}
	return 0;
}