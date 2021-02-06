#include <bits/stdc++.h>
#include <iostream>

#define ll long long

using std::cin;
using std::cout;
using std::endl;

int main() {

	int m,n,area;
	cin >> m >> n;
	area = m*n;

	(area % 2 == 1) ? area-- : area;

	cout << area / 2 << endl;

	return 0;
}

