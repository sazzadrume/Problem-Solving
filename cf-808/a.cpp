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

		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}

		bool ok = true;

		for (int i = 1; i < n; ++i)
		{
			if(a[i] % a[0] != 0){
				ok = false;
				break;
			}
		}

		if(ok){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}