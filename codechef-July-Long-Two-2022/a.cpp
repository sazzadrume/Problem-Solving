#include <bits/stdc++.h>
using namespace std;

int main() {

	int tt;
	cin >> tt;

	while (tt--) {
		long long a, b, n;
		cin >> a >> b >> n;

		if (n % a != 0) {
			n = (n / a + 1) * a;
		}

		long long ans = -1;

		if (a == b) {
			ans = -1;
		}
		else {
			for (long long i = n; i < n * 1.5; i += a) {
				if (i % a == 0 && i % b != 0) {
					ans = i;
					break;
				}
			}
		}
		cout << ans << '\n';
	}
	return 0;
}
