#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

int main()
{
    int h, w, k;
    cin >> h >> w >> k;

    char a[h][w];
    int p = 0;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> a[i][j];
        }
    }
    int b[h][w];
    int q = 0;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(a[i][j] == '#'){
                q++;
                b[i][j] = q;
                p++;
            }
            if(p == w){
                p = 0;
            }
        }
    }

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cout << b[i][j] << " ";
        }
        cout <<"\n";
    }
    cout << "\n";
}
