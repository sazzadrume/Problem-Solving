#include <bits/stdc++.h>

using namespace std;

int findStartIndex(int arr[], int n, int val) {
	int start = 0;
	int end = n - 1 ;
	while (1) {
		if (arr[start] != val)
			start++;
		if (arr[end] != val)
			end--;
		if (arr[start] == arr[end] && arr[start] == val)
			break;
		if (start == end)
			break;
	}
	if (start == end ) {

	} else {
		// cout<<"Element present twice at \n";
		// cout<<"Start index: "<<start<<endl;
		// cout<<"Last index: "<<end;
		// return start;
	}
	return start;

}

int findLastIndex(int arr[], int n, int val) {
	int start = 0;
	int end = n - 1 ;
	while (1) {
		if (arr[start] != val)
			start++;
		if (arr[end] != val)
			end--;
		if (arr[start] == arr[end] && arr[start] == val)
			break;
		if (start == end)
			break;
	}
	if (start == end ) {

	} else {
		// cout<<"Element present twice at \n";
		// cout<<"Start index: "<<start<<endl;
		// cout<<"Last index: "<<end;
		// return end;
	}
	return end;
}

int main(int argc, char const *argv[])
{
	int tt;
	cin >> tt;

	while (tt--) {
		int n, k;
		cin >> n >> k;

		int a[n];

		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}

		map<string, int> mp;

		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				string w1 = to_string(i);
				string w2 = to_string(j);

				string v1 = to_string(a[i]);
				string v2 = to_string(a[j]);

				mp.insert({v1 + v2, w1 + '/' + w2});
			}
		}

		for (int i = 0; i < k; ++i)
		{
			int x, y;
			cin >> x >> y;

			int l = 0, r = 0;

			string a1 = to_string(x);
			string a2 = to_string(y);

			auto it = mp.find(a1 + a2);

			// cout << "Index : " <<  l << ' ' << r << '\n';

			// int cnt1 = count(a, a + n, x);
			// int cnt2 = count(a, a + n, y);

			// if (cnt1 == 0 || cnt2 == 0) {
			// 	printf("NO\n");
			// }
			// else if (l < r) {
			// 	printf("YES\n");
			// }
			// else {
			// 	printf("NO\n");
			// }

			// int cnt1 = count(a, a + n, x);
			// int cnt2 = count(a, a + n, y);
			// // if()

			// if(cnt1 == 0 || cnt2 == 0){
			// 	printf("NO\n");
			// }
			// else if (findStartIndex(a, n, x) < findLastIndex(a, n, y)) {
			// 	printf("YES\n");
			// }
			// else {
			// 	printf("NO\n");
			// }

			int qw = it->second;



			if (it->second) {
				printf("YES\n");
			}
			else {
				printf("NO\n");
			}

		}
	}
	return 0;
}