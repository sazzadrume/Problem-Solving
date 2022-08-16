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

		bool ans = true;

		for (int i = 1; i <= n; i++) {
			if (((i + k) * (i + 1)) % 4 == 0) {
				i++;
			}
			else if ((((i + 1 + k) * (i)) % 4 == 0)) {
				i++;
			}
			else {
				ans = false;
				break;
			}
		}

		if (ans) {
			printf("YES\n");

			for (int i = 1; i <= n; i++) {
				if (((i + k) * (i + 1)) % 4 == 0) {
					cout << i << ' ' << i + 1;
					i++;
				}
				else if ((((i + 1 + k) * (i)) % 4 == 0)) {
					cout << i + 1 << ' ' << i;
					i++;
				}
				
				if(i % 2 == 0){
					cout << '\n';
				}
			}
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}