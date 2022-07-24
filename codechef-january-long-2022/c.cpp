#include <bits/stdc++.h>
using namespace std;


int main()
{
    int tt;
    cin >> tt;

    while(tt--){
        int n, ans = 0;
        cin >> n;

        int a[3][3];

        for (int i = 0; i < 3; ++i)
        {
            cin >> a[i][0] >> a[i][1] >> a[i][2];
        }

        if (a[0][0] == n && a[1][1] == n && a[2][2] == n){
            cout << ans << '\n';
            continue;
        }
        
        int final_ans = max(a[1][0] + a[2][0] + a[2][1], a[0][1] + a[0][2] + a[1][2]);

        cout << final_ans << '\n';
    }
}

/*
2 1 2
1 4 0
2 0 3


3 0 2
0 5 0
2 0 3


4 0 1
0 5 0
1 0 4


5 0 0
0 5 0
0 0 5


*/