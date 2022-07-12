#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int tt;
	cin >> tt;

	while(tt--){
		string s;
		cin >> s;

		for (int i = 0; i < s.size(); ++i)
		{
			s[i] = tolower(s[i]);
		}

		if(s == "yes"){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}