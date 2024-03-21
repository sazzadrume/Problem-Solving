#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--){
		LL x, y, z;
		cin >> x >> y >> z;
		z--;
		int a[100];
		for (int i = 0; i < 100; ++i)
		{
			a[i] = 0;
		}
		int q = 0;
		for (int i = max(x,y); i > 0; --i)
		{
			if(x % i == 0 && y % i == 0){
				a[q] = i;
				q++;
			}
		}

		if(a[z] == 0){
			printf("No crymeth today\n");
		}
		else{
			cout << a[z] << "\n";
		}
	}
	return 0;
}
