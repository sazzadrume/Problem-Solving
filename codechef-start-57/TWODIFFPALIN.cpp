#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int tt;
	cin >> tt;

	while (tt--) {
		int a, b;
		cin >> a >> b;
		
		bool ok = false;
		
		if(a < 2 || b < 2){
		    ok = false;
		}
		else if(a % 2 == 0 || b % 2 == 0){
		    ok = true;
		}
// 		else if(abs(a - b) > 0 && abs(a-b) % 2 == 0){
// 		    ok = true;
// 		}
		
		if(ok){
		    cout << "YES" << '\n';
		}
		else{
		    cout << "NO" << '\n';
		}
	}
	
	//010 10
	
	return 0;
}