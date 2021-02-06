#include <bits/stdc++.h>
#include <iostream>

#define ll long long

using std::cin;
using std::cout;
using std::endl;

int main() {
	int c;
	int i = 0;

	// get the character inputted by user
	while ( (c = getchar()) != '\n') {

		// select the first character
		if ( i < 1) {
			// make it uppercase
			c = (char) ::toupper(c);
			i++;
		}

		// format the current character
		// to char and add to output stream
		cout << (char)c;
	}

	cout << endl;

	return 0;
}

