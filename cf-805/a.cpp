#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int tt;
	cin >> tt;

	while (tt--) {
		int n;
		cin >> n;

		int ans = 0;

		if (n == 1) {
			ans = 0;
		}
		else if (n > 1 && n < 10) {
			ans = n - 1;
		}
		else {

			string num;

			stringstream ss;
			ss << n;

			ss >> num;

			int qq = 1;

			for (int i = 0; i < num.size() - 1; ++i)
			{
				qq *= 10;
			}

			ans = n - qq;

			// if (num[0] == '1' && (count(num.begin(), num.end(), '0')) == num.size() - 1) {
			// 	ans = 0;
			// }
		}


		cout << ans << '\n';
	}
	return 0;
}