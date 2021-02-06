#include <bits/stdc++.h>
#include <iostream>

#define ll long long

using std::cin;
using std::cout;
using std::endl;

int main() {
	int i,j,k;
	int row, column;

	for (i = 1; i < 6; i++) {
		for (j = 1; j < 6; j++) {
			cin >> k;
			if (k) {
				row = i;
				column = j;
			}
		}
	}

	int counter = 0;
	while (row != 3) {
		if (row > 3) {
			row--;
		} else {
			row++;
		}
		counter++;
	}

	while (column != 3) {
		if (column > 3) {
			column--;
		} else {
			column++;
		}
		counter++;
	}

	cout << counter << endl;

	return 0;
}

