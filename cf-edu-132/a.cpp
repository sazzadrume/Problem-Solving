#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int tt;
	cin >> tt;

	while (tt--) {
		int n;
		cin >> n;

		int x, y, z;
		cin >> x >> y >> z;

		bool ans = true;

		if (n == 1) {
			if (x == 0) {
				ans = false;
			}
			else {
				if (y == 0) {
					if ((x == 1 && z == 3) || (x == 3 && z == 1)) {
						ans = true;
					}
					else {
						ans = false;
					}
				}
				else if (z == 0) {
					if ((x == 1 && y == 3) || (x == 3 && y == 1)) {
						ans = true;
					}
					else {
						ans = false;
					}
				}
			}
		}
		else if (n == 2) {
			if (y == 0) {
				ans = false;
			}
			else {
				if (x == 0) {
					if ((y == 1 && z == 3) || (y == 3 && z == 1)) {
						ans = true;
					}
					else {
						ans = false;
					}
				}
				else if (z == 0) {
					if ((x == 1 && y == 3) || (x == 3 && y == 1)) {
						ans = true;
					}
					else {
						ans = false;
					}
				}
			}
		}
		else {
			if (z == 0) {
				ans = false;
			}
			else {
				if (x == 0) {
					if ((y == 1 && z == 3) || (y == 3 && z == 1)) {
						ans = true;
					}
					else {
						ans = false;
					}
				}
				else if (y == 0) {
					if ((x == 1 && z == 3) || (x == 3 && z == 1)) {
						ans = true;
					}
					else {
						ans = false;
					}
				}
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