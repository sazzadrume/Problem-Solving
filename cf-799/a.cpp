#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int tt;
	cin >> tt;

	while (tt--) {
		int a[4];
		
		for (int i = 0; i < 4; ++i)
		{
			cin >> a[i];
		}

		int ans = 0;

		for (int i = 1; i < 4; ++i)
		{
			if(a[i] > a[0]){
				ans++;
			}
		}

		cout << ans << '\n';
	}

	return 0;
}
