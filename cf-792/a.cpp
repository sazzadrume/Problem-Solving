#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int tt;
	cin >> tt;

	while(tt--){
		string s;
		cin >> s;

		if(s.size() == 2){
			cout << s[1] << '\n';
		}
		else{
			sort(s.begin(), s.end());
			cout << s[0] << '\n';
		}
	}

	return 0;
}
