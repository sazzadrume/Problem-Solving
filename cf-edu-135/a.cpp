#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int tt;
	cin >> tt;

	while(tt--){
		int n;
		cin >> n;

		int a[n];

		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}

		int ans = 0;

		int mx = *max_element(a, a + n);

		for (int i = 0; i < n; ++i)
		{
			if(a[i] == mx){
				ans = i + 1;
				break;
			}
		}

		cout << ans << '\n';
	}

	return 0;
}

