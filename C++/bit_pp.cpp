#include <bits/stdc++.h>
#include <iostream>
#include <string>

#define ll long long

using std::cin;
using std::cout;
using std::endl;

int main() {
	int ops;
	int x = 0;
	std::string operation;
	cin >> ops;

	for(int i = 0; i < ops; i++) {
		cin >> operation;

		for(int j = 0; j < operation.length(); j++) {
			if(operation[j] == '+' && operation[j+1] == '+')
				x++;

			if(operation[j] == '-' && operation[j+1] == '-')
				x--;
		}
	}

	cout << x << endl;

	return 0;
}

