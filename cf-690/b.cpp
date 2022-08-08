#include <bits/stdc++.h>

using namespace std;


int main(int argc, char const *argv[])
{

	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		string s;

		cin >> s;


		if ((s[0] == '2' && s[n - 3] == '0' && s[n - 2] == '2' && s[n - 1] == '0') ||
		        (s[0] == '2' && s[1] == '0' && s[n - 2] == '2' && s[n - 1] == '0') ||
		        (s[0] == '2' && s[1] == '0' && s[2] == '2' && s[n - 1] == '0') ||
		        (s[0] == '2' && s[2] == '0' && s[3] == '2' && s[n - 1] == '0')
		   )
		{
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	return 0;
}
