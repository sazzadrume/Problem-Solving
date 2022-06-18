#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int tt;
	cin >> tt;

	while (tt--) {
		char c[8][8];

		for (int i = 0; i < 8; ++i)
		{
			for (int j = 0; j < 8; ++j)
			{
				cin >> c[i][j];
			}
		}

		for (int i = 1; i < 8; ++i)
		{
			for (int j = 1; j < 8; ++j)
			{
				if ((c[i - 1][j - 1] == '#' && c[i - 1][j + 1] == '#') &&
				        (c[i + 1][j - 1] == '#' && c[i + 1][j + 1] == '#')) {
					cout << i + 1 << ' ' << j + 1 << '\n';
				}
			}
		}

	}

	return 0;
}

