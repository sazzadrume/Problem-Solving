#include <bits/stdc++.h>
using namespace std;

#define pi acos(-1.0)

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	int G = 1;
	while(t--){
		double n;
		cin >> n;
		double z = pow(n,2);
		double x = sqrt(z+z)/2;
		double areaofSecondHalf = pi * x * x;
		double asholarea = areaofSecondHalf / 4;
		double vumi = x;
		double areaofRightTriangle = (vumi * vumi)/2;
		double left = asholarea - areaofRightTriangle;
		double q = n / 2;
		double finalArea = pi * q * q;
		finalArea = (finalArea/2) - left;
		printf("Case %d: ", G++ );
		cout << setprecision(4)<<fixed;
		cout << finalArea <<endl;
	}
	return 0;
}
