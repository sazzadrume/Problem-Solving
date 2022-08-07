#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll findDivisors(ll n)
{
    //vector<int> v;
    // Array to store the count
    // of divisors
    ll div[n + 1];
    memset(div, 0, sizeof div);

    ll ans = 0;

    // For every number from 1 to n
    for (ll i = 1; i <= n; i++) {

        // Increase divisors count for
        // every number divisible by i
        for (ll j = 1; j * i <= n; j++){
            div[i * j]++;
            //ans += i * div[i * j - 1];
        }
    }

        for(ll i = 1; i <= n; i++){
            ans += i * div[i];
        }

    return ans;
}

int main() {

    //freopen ("in.txt","r",stdin);
    //freopen ("out.txt","w",stdout);

	ll n;
	cin >> n;

	cout << findDivisors(n) << "\n";
	return 0;
}
