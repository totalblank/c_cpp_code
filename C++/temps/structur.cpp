// structur.cpp -- a simple structur
#include <bits/stdc++.h>
#include <iostream>
struct inflatable // structure declaration
{
	char name[20];
	float volume;
	double price;
};

#define ll long long

using std::cin;
using std::cout;
using std::endl;

int main() {

	inflatable guest = {
		"Glorious Gloria", // name value
		1.88, // volume value
		29.99 // price value
	}; // guest is a structure variable of type inflatable
	inflatable pal =
	{
		"Audacious Arthur",
		3.12,
		32.99
	}; // pal is a second variable of type inflatable

	cout << "Expand your guest list with " << guest.name;
	cout << " and " << pal.name << "!\n";
	cout << "You can have both $";
	cout << guest.price + pal.price << "!\n";

	return 0;
}

