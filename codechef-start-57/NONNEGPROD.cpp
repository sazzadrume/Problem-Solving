#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int tt;
	cin >> tt;

	while (tt--) {
		int n;
		cin >> n;
		
		int a[n];
		
		int zero = 0, neg = 0;
		
		for(int i = 0; i < n; i++){
		    cin >> a[i];
		    if(a[i] == 0){
		        zero++;
		    }
		    if(a[i] < 0){
		        neg++;
		    }
		}
		
		if(zero > 0 || neg % 2 == 0){
		    cout << 0 << '\n';
		}
		else{
		    cout << 1 << '\n';
		}
		
	
	}
	return 0;
}