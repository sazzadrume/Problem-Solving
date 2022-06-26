#include <bits/stdc++.h>
using namespace std;
#define mx  10000007

int main()
{
	
	int n;
	cin >> n;
	int G = 1;
	while(n--){
		int a;
		cin >> a;

		stringstream s;
		s << a;
		string p = s.str();
		reverse(p.begin(),p.end());

		if( a < 10){
			printf("Case %d: ", G++);
			cout << a <<"\n";
		}
		else {
			printf("Case %d: ", G++);
			cout << a;
			for(int i = 1; i < p.size(); i++){
				cout << p[i];
			}
			printf("\n");
		}
	}
	return 0;
}