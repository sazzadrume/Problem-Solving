#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;

		int a[n];

		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}
		int k = 0;

		for (int i = 0; i < n / 2; i++)
		{
			
			cout << a[i] << " " << a[n - 1 - i] << " ";
		}

		if(n % 2 != 0){
			cout << a[n/2] << " ";
		}

		cout << "\n";
	}

		
	return 0;
}