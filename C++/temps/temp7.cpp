#include <bits/stdc++.h>
#include <iostream>

#define ll long long

using std::cin;
using std::cout;
using std::endl;

int main() {
	cout << "What year was your house?\n";
	int year;
	cin >> year;
	cout << "What is its street address?\n";
	char address[80];
	cin.getline(address, 80);
	cout << "Year built: " << year << endl;
	cout << "Address: " << address << endl;
	cout << "Done!\n";

	return 0;
}

