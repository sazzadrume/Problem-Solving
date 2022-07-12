#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int tt;
	cin >> tt;

	while(tt--){
		int n;
		cin >> n;

		string s;
		cin >> s;

		set<char> st;

		for (int i = 0; i < n; ++i)
		{
			st.insert(s[i]);
		}

		cout << st.size() * 2 + (n - st.size()) << '\n';
	}
	return 0;
}