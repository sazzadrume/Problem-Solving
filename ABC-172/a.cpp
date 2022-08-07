#include <bits/stdc++.h>
using namespace std;


int main() {

    //freopen ("in.txt","r",stdin);
    //freopen ("out.txt","w",stdout);

	int n;
	
	cin >> n;
	
	int ans = n + pow(n,2) + pow(n, 3);

    cout << ans << "\n";
    
	return 0;
}
