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

		if(k == 0){
			printf("NO\n");
		}
		else{
			printf("YES\n");

			for (int i = 1; i <= n; ++i)
			{
				cout << i << ' ' ;

				if(i % 2 == 0){
					cout << '\n';
				}
			}
		}
	}
	return 0;
}