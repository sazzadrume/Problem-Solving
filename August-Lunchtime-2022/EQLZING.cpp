#include <bits/stdc++.h>
using namespace std;

int main() {
	int tt;
	cin >> tt;

	while (tt--) {
		int a, b;
		cin >> a >> b;

		bool ok = false;

		if (a % 2 == b % 2) {
			ok = true;
		}
		// else if(abs(a - b) > 1){
		//     ok = true;
		// }

		if (ok) {
			cout << "Yes" << '\n';
		}
		else {
			cout << "No" << '\n';
		}
	}
}