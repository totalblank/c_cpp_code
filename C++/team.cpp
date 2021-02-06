#include <bits/stdc++.h>
#include <iostream>
#define ll long long
#define MEMBERS 3

using namespace std;

int main() {

	int n;
	cin >> n;
	int mem1, mem2, mem3, count;
	count = 0;

	for (int i = 0; i < n; i++) {
		cin >> mem1 >> mem2 >> mem3;
		if(mem1 + mem2 + mem3 >= 2)
			count++;
	}

	cout << count << endl;
	return 0;
}

