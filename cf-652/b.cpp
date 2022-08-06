#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        string t = s;

        sort(t.begin(), t.end());
        int k = count(s.begin(), s.end(), '0');

        if (k == 0) {
            cout << s << "\n";
        }
        else if (s == t) {
            cout << s << "\n";
        }
        else if (s[0] == '0') {
            int e;
            for (int i = s.size() - 1; i >= 0; i--) {
                if (s[i] == '0') {
                    e = i;
                    break;
                }
            }
            for (int i = 0; i < s.size(); i++) {
                if (s[i] == '0') {
                    cout << s[i];
                }
                else {
                    break;
                }
            }
            for (int i = e; i < s.size(); i++) {
                cout << s[i];
            }

            cout << "\n";
        }
        else {
            int ans = 0;
            for (int i = s.size(); i >= 0; i--) {
                if (s[i] == '0') {
                    ans = i;
                    break;
                }
            }
            for (int i = ans; i < s.size(); i++) {
                cout << s[i];
            }
            cout << "\n";
        }
        //cout << s << "\n";
    }

    /*

    while(t--){
     int n;
    cin >> n;
     string s;
     cin >> s;
     int k = 0;
     for(int i = s.size() - 1; i >= 0; i--){
         if(s[i] == '0'){
             k = i;
             break;
         }
     }

     if(k == 0){
         cout << 1 << "\n";
     }
     else{
         for(int i = k; i < s.size(); i++){
             cout << s[i];
         }
         cout << "\n";
     }


     //cout << s << "\n";
    }
    */

}
