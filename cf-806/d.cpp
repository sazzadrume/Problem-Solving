#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int tt;
	cin >> tt;

	while (tt--) {
		int n;
		cin >> n;

		vector<string>s(n);

		int ans = 0;

		for (int i = 0; i < n; ++i)
		{
			cin >> s[i];
		}

		std::sort(s.begin(), s.end(), []
		(const std::string & first, const std::string & second) {
			return first.size() < second.size();
		});

		for (int i = 0; i < n; ++i)
		{
			cout << s[i];

			string temp = s[i];

			bool found = false;

			for (int j = 0; j < n; j++) {
				if (i != j) {
					string qwe = s[j];
					for (int k = 0; k < qwe.size() - temp.size(); k++) {
						if (qwe.substr(i, temp.size()) == temp) {
							found = true;
					// 		break;
						}
					}
				}
			}

			if (found) {
				cout << 1;
			}
			else {
				cout << 0;
			}

		}

		cout << '\n';


	}



	return 0;
}

// 11001
// 00000
// 11111
// 10110
// 01111

// 11001
// 00000
// 11111
// 10110
// 01111