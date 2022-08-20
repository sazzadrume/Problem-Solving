#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int tt;
	cin >> tt;

	while(tt--){
		int n, k;
		cin >> n >> k;

		int mn = min(n, k);

		int mx = max(n, k);

		int ans = (mx + mn) + mn - 2;

		cout << ans << '\n';
	}
	return 0;
}