#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int tt;
	cin >> tt;

	while (tt--) {
		string s;
		cin >> s;

		int p;
		cin >> p;

		string t = s;


		std::vector<int> v;

		for (int i = 0; i < s.size(); i++) {
			int tmp = s[i];
			tmp -= 96;

			v.push_back(tmp);
		}

		// sort(v.begin(), v.end());

		int mn = *min_element(v.begin(), v.end());

		if (mn > p) {
			printf("\n");
		}
		else {
			int quan = 0;
			for (int i = 0; i < s.size(); i++) {
				int w = s[i];
				w -= 96;

				if(w == mn){
					cout << s[i];
				}
				quan += w;

				// cout << "Quantity : " << quan << '\n';

				if(quan > p){
					break;
				}
				// if (quan <= p) {
				// 	cout << s[i];
				// }
				// else{
				// 	quan -= w;
				// }

			}
			cout << '\n';
		}

		// for(auto& num : v){
		// 	cout << num << '\n';
		// }
	}
	return 0;
}