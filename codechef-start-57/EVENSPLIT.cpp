#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int tt;
	cin >> tt;

	while (tt--) {
		int n;
		cin >> n;
		
		string s;
		cin >> s;
		
		if(n > 2){
		    sort(s.begin(), s.end());
		}
	
	    cout << s << '\n';
	}
	return 0;
}