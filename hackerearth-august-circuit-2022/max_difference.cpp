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

		sort(a, a + n);

		int start = 0, end = n - 1;

		if (n == 2) {
			cout << a[1] - a[0] << '\n';
		}
		else {
			cout << (a[end] - a[start]) + (a[end - 1] - a[start + 1]) << '\n';
		}
	}
	return 0;
}