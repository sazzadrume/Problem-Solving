#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;

	if (n % 4 == 2) {
		cout << n << '\n';
	}
	else {
		int x = (4 * ( n / 4)) + 2;

		if (x < n) {
			x += 4;
		}
		
		cout << x << '\n';
	}
	return 0;
}