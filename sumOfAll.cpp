#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int tt;
	cin >> tt;

	while (tt--) {
		string s;
		cin >> s;

		int p = s.size();

		for (int i = 0; i < s.size(); ++i)
		{
			for (int j = i; j < p; ++j)
			{
				// string temp = (char)(s[i] + s[j]);

				cout << "i : " << s[i] << "j : " << s[j] << '\n';

				string temp = s[i] + s[j];

				cout << "temp : " << temp << '\n';
			}
			p--;
		}
	}
	return 0;
}