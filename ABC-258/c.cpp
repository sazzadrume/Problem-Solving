#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int N, Q;
	cin >> N >> Q;

	string S;
	cin >> S;

	for (int i = 0; i < Q; ++i)
	{
		int L, R;
		cin >> L >> R;

		if (L == 1) {

			string T = S;

			reverse(T.begin(), T.end());

			string pref = T.substr(0, R);

			reverse(pref.begin(), pref.end());

			S = pref + S;

			S = S.substr(0, N);
		}
		else {
			cout << S[R - 1] << '\n';
		}
	}


	return 0;
}
