#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int tt;
	cin >> tt;

	while (tt--) {
		int n, l, r;
		cin >> n >> l >> r;

		int a[n];

		int index = 1;

		l--;

		for (int i = 1; i <= n; ++i)
		{
			if (index <= n) {
				while (__gcd(l++, i) == i) {
					a[index] = __gcd(l++, i);
					index++;
				}
			}
		}



		if (a[n] > r) {
			printf("NO\n");
		}
		else {
			printf("YES\n");
			for (int i = 1; i <= n ; i++) {
				cout << a[i] << ' ';
			}

			cout << '\n';
		}


		// int a[n];

		// for (int i = 1; i <= n; ++i)
		// {
		// 	if(i == 1){
		// 		a[i] = l + i;
		// 	}
		// 	else{
		// 		a[i] = (l + (i * 10));
		// 	}
		// }

		// for (int i = 1; i <=  n; ++i)
		// {
		// 	cout << a[i] << ' ';
		// }

		// cout << '\n';

		// if(n == 1){
		// 	printf("YES\n");
		// 	cout << l << '\n';
		// }
		// else if(n == r && l == 1){
		// 	printf("YES\n");
		// 	for (int i = l; i <= r; ++i)
		// 	{
		// 		cout << i << ' ';
		// 	}

		// 	cout << '\n';
		// }
		// else if(a[1] >= l && a[n] <= r){
		// 	printf("YES\n");

		// 	for(int i = 1; i <= n; i++){
		// 		cout << a[i] << ' ';
		// 		// cout << "GCD : " << __gcd(a[i], i) << ")";
		// 	}

		// 	cout << '\n';
		// }
		// else{
		// 	printf("NO\n");
		// }

		// set<int> s;
		// for (int i = 1; i <= n; ++i) {
		// 	for (int c = l; c <= r; c++) {
		// 		int curr = __gcd(i, c);
		// 		cout << "GCD : " << curr << '\n';
		// 		if (curr >= l && curr <= r) {
		// 			s.insert(curr);
		// 			// cout << "Curr : " << curr << '\n';
		// 		}
		// 	}

		// 	if (s.size() == n) {
		// 		break;
		// 	}
		// }



		// if (s.size() == n) {
		// 	printf("YES\n");

		// 	for (auto& v : s) {
		// 		cout << v << ' ';
		// 	}
		// 	cout << '\n';
		// }
		// else {
		// 	printf("NO\n");
		// }
	}
	return 0;
}