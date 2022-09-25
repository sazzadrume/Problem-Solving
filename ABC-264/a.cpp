#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	string s;
	cin >> s;

	int ans = 0;

	for (int i = 0; i < s.size(); ++i)
	{
		if (s[i] == 'a') {
			ans += abs(i - 0);
		}
		else if (s[i] == 't') {
			ans += abs(i - 1);
		}
		else if (s[i] == 'c') {
			ans += abs(i - 2);
		}
		else if (s[i] == 'o') {
			ans += abs(i - 3);
		}
		else if (s[i] == 'd') {
			ans += abs(i - 4);
		}
		else if (s[i] == 'e') {
			ans += abs(i - 5);
		} 
		else if (s[i] == 'r') {
			ans += abs(i - 6);
		}
	}
	cout << ans << '\n';
}