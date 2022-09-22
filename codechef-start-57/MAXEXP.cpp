#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int tt;
	cin >> tt;

	while (tt--) {
		int n;
		cin >> n;
		
		bool ok = true;
		
		string s;
		cin >> s;
		
		sort(s.begin(), s.end());
		
		string t = "";
		
		string signs = "";
		
		for(int i = 0; i < s.size(); i++){
		    if(s[i] == '+' || s[i] == '-'){
		        signs += s[i];
		    }
		    else{
		        t += s[i];
		    }
		}
		
		reverse(t.begin(), t.end());
		
		for(int i = 0; i < t.size() - signs.size(); i++){
		    cout << t[i];
		}
		
		
		int q = t.size() - signs.size();
		
		for(int j = 0; j < signs.size(); j++){
		    cout << signs[j] << t[q++];
		}
		
		cout << '\n';
		
		
// 		cout << t << '\n';
	}
	return 0;
}