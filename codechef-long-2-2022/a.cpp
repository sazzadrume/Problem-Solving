#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;

	while(n--){
		int value;
		cin >> value;

		int total = value / 100 + value % 100;

		if(total > 10){
			total = -1;
		}

		cout << total << '\n';
	}
	return 0;
}