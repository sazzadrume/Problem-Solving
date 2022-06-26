#include <bits/stdc++.h>
using namespace std;
#define mx  10000007

int main()
{
	
	int n;
	cin >> n;
	while(n--){
		int s = 0;
		int x, a, b, c, d;
		cin >> x >> a >> b >> c >> d;
		s += a+b+c+d;
		//s++;
		//cout << s <<endl;
		if(x/2 < s){
			printf("Yes\n");
		}
		else printf("No\n");
	}
	return 0;
}
