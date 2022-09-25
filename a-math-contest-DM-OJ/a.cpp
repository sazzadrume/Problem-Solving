#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;

	cin >> n;

	int a[n];

	int ans = 0, total = 0;

	int mx = 1e9;

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			ans += (a[i] + a[j]);
			ans %= mx;
		}
	}

	cout << ans << '\n';

	return 0;
}