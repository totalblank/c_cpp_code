#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>

#define ll long long

using std::cin;
using std::cout;
using std::endl;

int main() {
	int length;
	std::string stones;

	cin >> length;
	cin >> stones;

	int count = 0;
	int i = 1;
	while ( i < length) {
		if (stones[i-1] == stones[i]) {
			count++;
		}
		i++;
	}

	cout << count << endl;
	return 0;
}
/*
 *********Strategy*********
 * declare the counter variable
 * i and set its value to 1.
 * we loop from the second
 * stone to the last stone,
 * if any stone has the same
 * color as the its prev one
 * we increment the count.
 */
