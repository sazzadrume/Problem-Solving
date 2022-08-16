#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int tt;
	cin >> tt;

	while (tt--) {
		int n, k;
		cin >> n >> k;

		// cout << n << ' ';

		if (n % 2 == k % 2) {
			printf("Tonya\n");
		}
		else {
			printf("Burenka\n");
		}
	}
	return 0;
}