#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;

	int hh = 21, mm = 0;

	hh += n / 60;
	mm += n % 60;

	if(mm < 10){
		cout << hh << ':' << '0' << mm << '\n';
	}
	else{
		cout << hh << ':' << mm << '\n';
	}
	return 0;
}