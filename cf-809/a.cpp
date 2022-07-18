#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int tt;
	cin >> tt;

	while (tt--) {
		int n, m;
		cin >> n >> m;

		string s = "";

		for (int i = 0; i < m; ++i)
		{
			s += 'B';
		}

		int a[n];

		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}

		for (int i = 0; i < n; ++i)
		{
			int l = a[i];

			int r = m + 1 - a[i];

			l--;
			r--;

			string x = s;
			string y = s;

			x[l] = 'A';
			y[r] = 'A';

			if (x < y) {
				s = x;
			}
			else {
				s = y;
			}
		}

		// s[0] = 'A';

		cout << s << '\n';


	}
	return 0;
}