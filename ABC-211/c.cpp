#include <bits/stdc++.h>

using namespace std;


int count_chokudai(string a, string b, int m, int n)
{
	if ((m == 0 && n == 0) || n == 0)
		return 1;

	if (m == 0)
		return 0;

	if (a[m - 1] == b[n - 1])
		return count_chokudai(a, b, m - 1, n - 1) +
			count_chokudai(a, b, m - 1, n);
	else
		return count_chokudai(a, b, m - 1, n);
}

int main(int argc, char const *argv[])
{
	
	string s;
	cin >> s;

	string t = "chokudai";


	cout << count_chokudai(s, t, s.size(), t.size()) % 1000000007 << endl;
} 