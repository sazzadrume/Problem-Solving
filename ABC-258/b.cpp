#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;

	string S = "";
	
	int mat[N][N];

	for (int i = 0; i < N; ++i)
	{
		string now;
		cin >> now;

		sort(now.begin(), now.end());

		S += now[now.size() - 1];
	}

	char start;
	int counter = 0;

	for (char i = '9'; i >= '0'; ++i)
	{
		int find = count(S.begin(), S.end(), i);
		if(find){
			start = i;
			break;
		}
	}

	for (int i = 0; i < S.size(); ++i)
	{
		if(S[i] == start){
			counter = i;
			break;
		}
	}

	string ans = S.substr(counter, S.size() - counter);
	ans += S.substr(0, counter);

	cout << ans << '\n';

	return 0;
}