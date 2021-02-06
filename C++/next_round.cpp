#include <bits/stdc++.h>
#include <iostream>
#define ll long long

using namespace std;

int main() {
	int n, k, count;
	count = 0;
	cin >> n >> k;

	int inputs[n];

	// take input
	for (int i = 0; i < n; i++) {
		cin >> inputs[i];
	}

	for (int i = 0; i < n; i++) {
		if ((inputs[i] >= inputs[k-1]) && inputs[i] > 0)
			count++;
	}

	cout << count << endl;

	return 0;
}

