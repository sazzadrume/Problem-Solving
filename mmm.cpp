#include <bits/stdc++.h>
using namespace std;

void preCompute(int arr[], int n, int pre[])
{
    pre[0] = arr[0];
    for (int i = 1; i < n; i++)
        pre[i] = arr[i] + pre[i - 1];
}

int rangeSum(int i, int j, int pre[])
{
    if (i == 0)
        return pre[j];

    return pre[j] - pre[i - 1];
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, q;
    cin >> n >> q;

    int sum = 0;

    int a[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    int pre[n];



    sort(a, a + n);
    reverse(a, a + n);

    preCompute(a, n, pre);

    for (int i = 0; i < q; ++i)
    {
        int x , y;
        cin >> x >> y;


        int ans;

        if(x == y){
            ans  = rangeSum(x, y, pre);
        } 
        // else if(x == n){
        //     ans = rangeSum(x - y, y + 1, pre);
        // }
        else{
            ans = rangeSum(x - y, y, pre);
        }

        cout << ans << '\n';
    }
}

