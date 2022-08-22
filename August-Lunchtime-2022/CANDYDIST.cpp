#include <bits/stdc++.h>
using namespace std;

int main() {
	int tt;
	cin >> tt;

	while (tt--) {
		int a, b;
		cin >> a >> b;

		int sm = a / b;

		bool ans = false;

		if (a % b == 0) {
			if (sm % 2 == 0) {
				ans = true;
			}
		}

		if (ans) {
			cout << "Yes" << '\n';
		}
		else {
			cout << "No" << '\n';
		}
	}
}