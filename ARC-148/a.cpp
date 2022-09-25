#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int tt;
	cin >> tt;

	int Case = 0;

	while (tt--) {
		int n;
		cin >> n;

		string s;

		int x, y;

		string org[n], mod[n];

		int Org[n], Mod[n];

		for (int i = 0; i < n; ++i)
		{
			cin >> s >> x >> y;
			org[i] = s;
			mod[i] = s;
			Org[i] = x;
			Mod[i] = x;
		}

		sort(mod, mod + n);
		sort(Mod, Mod + n);

		int ans = 0;

		for (int i = 0; i < n; ++i)
		{
			if (org[i] == mod[i] && Org[i] == Mod[i]) {
				ans++;
			}
		}

		cout << "Case #" << ++Case << ": " << ans << '\n';
	}

	return 0;
}