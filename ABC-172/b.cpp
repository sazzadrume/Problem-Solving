#include <bits/stdc++.h>
using namespace std;


int main() {

    //freopen ("in.txt","r",stdin);
    //freopen ("out.txt","w",stdout);

	string s, t;
	cin >> s >> t;
	
	int ans = 0;
	
	for(int i = 0; i < s.size(); i++){
        if(s[i] != t[i]){
            ans++;
        }
	}
	
	cout << ans << "\n";
    
	return 0;
}
