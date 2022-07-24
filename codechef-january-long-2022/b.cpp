#include <bits/stdc++.h>
using namespace std;


int main()
{
    int tt;
    cin >> tt;

    while(tt--){
        int n, x;
        cin >> n >> x;

        int a[n], sum = 0;

        for (int i = 0; i < n; ++i)
        {
        	cin >> a[i];
        	sum += a[i];
        }

        sort(a, a + n);
        reverse(a, a + n);

        int ans = 0;

        if(sum < x){
        	ans = -1;
        }
        else{
        	int new_sum = 0;

        	for (int i = 0; i < n; ++i)
        	{
        		if(new_sum < x){
        			new_sum += a[i];
        			ans++;
        		}
        	}
        }

        cout << ans << '\n';
    }
}