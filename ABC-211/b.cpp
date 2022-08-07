#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	
	string a, b, c, d;
	cin >> a >> b >> c >> d;


	int w = 0, x = 0, y = 0, z = 0;

	if(a == "H"){
		w++;
	}
	else if (b == "H")
	{
		w++;
	}
	else if (c == "H")
	{
		w++;
	}
	else if (d == "H")
	{
		w++;
	}


	if(a == "2B"){
		x++;
	}
	else if (b == "2B")
	{
		x++;
	}
	else if (c == "2B")
	{
		x++;
	}
	else if (d == "2B")
	{
		x++;
	}

	if(a == "3B"){
		y++;
	}
	else if (b == "3B")
	{
		y++;
	}
	else if (c == "3B")
	{
		y++;
	}
	else if (d == "3B")
	{
		y++;
	}

	if(a == "HR"){
		z++;
	}
	else if (b == "HR")
	{
		z++;
	}
	else if (c == "HR")
	{
		z++;
	}
	else if (d == "HR")
	{
		z++;
	}


	if(w == 1 && x == 1 && y == 1 && z == 1){
		printf("Yes\n");
	}
	else{
		printf("No\n");
	}
} 