#include <bits/stdc++.h>
using namespace std;
int main() {
	int tt;
	cin >> tt;

	long long ans = 0LL;

	while (tt--) {
		int x, y;
		cin >> x >> y;

		ans += pow(abs(x - y), 2);
	}

	cout << ans << '\n';
}