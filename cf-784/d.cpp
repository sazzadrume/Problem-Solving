#include <bits/stdc++.h>
using namespace std;


int main()
{

    int tt;
    cin >> tt;

    while (tt--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        string ans = "YES";

        if (n == 1) {
            ans = "NO";
        }
        else if (n == 2) {
            if (s != "RB" || s != "BR" || s != "WW") {
                ans = "NO";
            }
        }
        else {
            for (int i = 0; i < n - 2; ++i)
            {
                if ((s[i] == s[i + 1]) && (s[i + 1] == s[i + 2])) {
                    if (s[i] != 'W') {
                        ans = "NO";
                    }
                }
                if ((s[i] == 'W') && (s[i + 2] == 'W') && (s[i + 1] != 'W')) {
                    ans = "NO";
                }
                if (s[i] == 'W' && s[i + 1] == s[i + 2] && s[i + 1] != 'W') {
                    ans = "NO";
                }
                if (s[i + 2] == 'W' && s[i] == s[i + 1] && s[i + 1] != 'W' && n == 3) {
                    ans = "NO";
                }
            }
        }

        cout << ans << '\n';
    }
}

