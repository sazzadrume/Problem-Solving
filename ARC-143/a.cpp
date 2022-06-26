#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	long long a, b, c;
	cin >> a >> b >> c;

	long long ans = max(a, max(b, c));

	long long check = (ans - a) + (ans - b) + (ans - c);

	if (check > ans) {
		ans = -1;
	}

	cout << ans << '\n';

	return 0;
}