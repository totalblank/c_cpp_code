#include <bits/stdc++.h>
#include <iostream>

#define ll long long

using std::cin;
using std::cout;
using std::endl;

int main() {
	int c;
	int i = 0;

	while ( (c = getchar()) != '\n') {
		if ( i < 1) {
			c = (char) ::toupper(c);
			i++;
		}
		cout << (char)c;
	}

	cout << endl;

	return 0;
}

