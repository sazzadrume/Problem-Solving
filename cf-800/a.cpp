#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int tt;
	cin >> tt;

	while (tt--) {
		int n, k;
		cin >> n >> k;

		int mn = min(n, k);
		int mx = max(n, k);

		for (int i = 0; i < mn; ++i)
		{
			printf("01");
		}

		if (mn == mx) {
			printf("\n");
		}
		if (mn != mx) {
			if (n == mx) {
				for (int i = 0; i < n + k - (mn * 2); ++i)
				{
					printf("0");
				}
				printf("\n");
			}
			else {
				for (int i = 0; i < n + k - (mn * 2); ++i)
				{
					printf("1");
				}
				printf("\n");
			}
		}
	}

	return 0;
}
