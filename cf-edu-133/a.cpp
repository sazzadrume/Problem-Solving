#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int tt;
	cin >> tt;

	while (tt--) {
		int n;
		cin >> n;

		if (n <= 4) {
			if (n == 1) {
				n++;
			}
			else if (n == 4) {
				n /= 2;
			}
			else {
				n = 1;
			}
		}
		else {
			if (n % 3 == 0) {
				n /= 3;
			}
			else {
				n = (n / 3) + 1;
			}
		}

		cout << n << '\n';
	}
	return 0;
}