#include <bits/stdc++.h>
#include <iostream>

#define ll long long

using std::cin;
using std::cout;
using std::endl;

int main() {
	int length;
	std::string stones;
	cin >> length;
	cin >> stones;

	int i = 0;
	int r,g,b;
	r=g=b=0;
	while ((stones[i] == 'R') && ( i < length)){
		r++;
		i++;
	}

	i = 0;
	while ((stones[i] == 'G') && (i < length)){
		g++;
		i++;
	}

	i = 0;
	while ((stones[i] == 'B') && (i < length)){
		b++;
		i++;
	}

	cout << r << ' ' << g << ' ' << b << endl;

	return 0;
}

