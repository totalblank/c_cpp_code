#include <bits/stdc++.h>

#define ll long long

using std::cin;
using std::cout;
using std::endl;

int main() {
	const char* name = "Aheer Srabon";
	cout << name + 1 << endl;
	cout << name + 2 << endl;
	cout << (int*)(name + 1) << endl;
	cout << (int*)(name + 2) << endl << endl;

	cout << endl << endl;
	cout << strlen(name + 1) << endl;
	return 0;
}

