#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int tt;
	cin >> tt;

	while(tt--){
		int n;
		cin >> n;

		int a[n];

		bool ok = true;

		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}

		for (int i = 0; i < n - 2; ++i)
		{
			if(a[i] >= a[i + 1]){
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