#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	while(n--){
		string s;
		cin >> s;
		string t = s;
		reverse(t.begin(), t.end());

		if(s == t){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}