#include <bits/stdc++.h>

using namespace std;

void swap (int *i, int *j) {
	int temp = *i;
	*i = *j;
	*j = temp;
}

void permute(int index, int* arr, int n) {
	if (index == n - 1) {
		for (int k = 0; k < n; ++k) {
			printf ("%d ", arr[k]);
		}
		printf ("\n");
		return;
	}
	for (int i = index; i < n; i++) {
		swap (arr + index, arr + i);
		permute (index + 1, arr, n);
		swap (arr + i, arr + index);
	}
	return;
}

int main(int argc, char const *argv[])
{
	int tt;
	cin >> tt;

	while (tt--) {
		int n;
		cin >> n;

		cout << n << '\n';

		int a[n];

		for (int i = 0; i < n; ++i)
		{
			a[i] = i + 1;
		}

		int q = 0;

		for (int i = 0; i < n; ++i)
		{
			cout << a[i] << ' ' ;
		}

		cout << '\n';

		for (int i = 0; i < n - 1; ++i)
		{
			swap(a[q], a[q + 1]);

			for (int j = 0; j < n; ++j)
			{
				cout << a[j] << ' ' ;
			}

			cout << '\n';

			q++;
		}

		// permute(0, a, n);
	}
	return 0;
}