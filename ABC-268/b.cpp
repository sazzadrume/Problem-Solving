#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	string s, t;
	cin >> s >> t;

	bool ok = true;

	for (int i = 0; i < s.size(); ++i)
	{
		if(s[i] != t[i]){
			ok = false;
			break;
		}
	}

	if(ok){
		printf("Yes\n");
	}
	else{
		printf("No\n");
	}

	return 0;
}