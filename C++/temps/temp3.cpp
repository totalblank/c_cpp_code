#include <bits/stdc++.h>
#include <iostream>

#define ll long long

using std::cin;
using std::cout;
using std::endl;

int main() {
	int a = 1;
	unsigned long long b = a;

	cout << typeid(a).name() << endl;
	cout << typeid(b).name() << endl;

	return 0;
}

