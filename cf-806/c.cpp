#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int tt;
	cin >> tt;

	while (tt--) {
		int n;
		cin >> n;

		int a[n];

		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}

		for (int i = 0; i < n; ++i)
		{
			int c;
			cin >> c;

			int q = a[i];

			string mp;
			cin >> mp;

			reverse(mp.begin(), mp.end());

			for (int i = 0; i < mp.size(); ++i)
			{
				if (mp[i] == 'U') {
					if (q == 0) {
						q = 9;
					}
					else {
						q--;
					}
				}
				else {
					if (q == 9) {
						q = 0;
					}
					else {
						q++;
					}
				}
			}
			cout << q << ' ';
		}
		cout << '\n';
	}
	return 0;
}

