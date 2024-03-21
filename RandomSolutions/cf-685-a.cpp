#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int tt;
	cin >> tt;

	while(tt--){
		int n;
		cin >> n;

		int ans = 0;

		if(n <= 3){
			ans = n - 1;
		}
		else {
			if(n % 2){
				ans = 3;
			}
			else{
				ans = 2;
			}
		}

		cout << ans << '\n';
	}
	return 0;
}