#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int tt;
	cin >> tt;

	while (tt--) {
		string s;
		cin >> s;

		set<char> st;

		int ans = 0;

		for (auto& c : s) {
			st.insert(c);

			// cout << "C : " << c << '\n';

			if(st.size() > 3){
				// cout << " ---------------- " << '\n';
				ans++;
				st.clear();
				st.insert(c);
			}

		}

		if(st.size() > 0){
			ans++;
		}

		// int ans = st.size() / 3;

		// if (st.size() % 3 != 0) {
		// 	ans++;
		// }

		// cout << "Set : " << st.size() << '\n';

		cout << ans << '\n';
	}
	return 0;
}