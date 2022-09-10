#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int a[5];

	set<int> s;

	for (int i = 0; i < 5; ++i)
	{
		cin >> a[i];
		s.insert(a[i]);
	}

	cout << s.size() << '\n';
	
	return 0;
}