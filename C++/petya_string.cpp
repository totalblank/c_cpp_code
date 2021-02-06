#include <bits/stdc++.h>
#include <iostream>

#define ll long long

int main() {
	std::string st1;
	std::string st2;
	int res;

	std::cin >> st1 >> st2;

	// convert input letters to lowercase
	std::for_each(st1.begin(), st1.end(), [](char & c) {
		c = ::tolower(c);
	});

	std::for_each(st2.begin(), st2.end(), [](char & c) {
		c = ::tolower(c);
	});

	for(int i = 0; i < st1.length(); i++) {
		if (st1[i] > st2[i]) {
			res = 1;
			break;
		} else if (st1[i] < st2[i]) {
			res = -1;
			break;
		} else {
			res = 0;
		}
	}

	std::cout << res << std::endl;

	return 0;
}

