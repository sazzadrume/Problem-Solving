#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;

	while(n--){
		int a, b;
		cin >> a >> b;

		int start = 0, end = 0;

		if(a > b){
			swap(a, b);
		}

		start = a / 10;

		if(a % 10 > 0){
			start++;
		}

		if(b % 10 > 0){
			end++;
		}

		end += b / 10;

		cout << end - start << '\n';
	}
}