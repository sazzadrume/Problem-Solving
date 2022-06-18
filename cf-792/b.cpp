#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int tt;
	cin >> tt;

	while(tt--){
		long long a, b, c;
		cin >> a >> b >> c;

		cout << c * 2 + b + a << ' ' << c * 2 + b << ' ' << c << '\n';
	}

	return 0;
}
