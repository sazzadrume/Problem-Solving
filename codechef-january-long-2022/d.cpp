#include <bits/stdc++.h>
using namespace std;

int check(int value){
    value--;

    while((value & value - 1) != 0){
        value &= value - 1;
    }

    return value << 1;
}


int main()
{
    int tt;
    cin >> tt;

    while(tt--){
        int n;
        cin >> n;

        int a[n], b[n];

        int sum = 0, ans = 1;

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            b[i] = a[i];
            sum += a[i];
        }

        sort(b, b + n);

        int final_sum = 0;

        final_sum = check(sum);

        sum -= b[0];

        ans = (final_sum - sum) / b[0];

        if(ans == 1){
            printf("0\n");
        }
        else{
            printf("1\n");
            printf("1 %d\n", ans);

            for (int i = 0; i < n; ++i)
            {
                if(a[i] == b[0]){
                    printf("%d\n", i + 1);
                    break;
                }
            }
        }



    }
}