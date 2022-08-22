#include <bits/stdc++.h>
using namespace std;

int main() {

    int tt;
    cin >> tt;

    while (tt--) {
        int a[3];

        cin >> a[0] >> a[1] >> a[2];

        sort(a, a + 3);

        int sm = a[0] + a[1];

        sm /= 2;

        if (sm < 35) {
            cout << "Fail" << '\n';
        }
        else {
            cout << "Pass" << '\n';
        }
    }
}