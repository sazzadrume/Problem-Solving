#include <bits/stdc++.h>
using namespace std;


int main()
{

    int tt;
    cin >> tt;

    while (tt--) {
        int n;
        cin >> n;

        if (n >= 1900) {
            printf("Division 1\n");
        }
        else if (n <= 1899 && n >= 1600)
        {
            printf("Division 2\n");
        }
        else if (n <= 1599 && n >= 1400)
        {
            printf("Division 3\n");
        }
        else if (n <= 1399) {
            printf("Division 4\n");
        }
    }
}

