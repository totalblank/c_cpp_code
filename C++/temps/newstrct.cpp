// newstrct.cpp -- using new with a structure
#include <iostream>
struct inflatable {
	char name[20];
	float volume;
	double price;
};

#define ll long long

using std::cin;
using std::cout;
using std::endl;

int main() {
	inflatable* ps = new inflatable; // allot memory for structure
	cout << "Enter name of inflatable item: ";
	cin.get(ps->name, 20); // method 1 for member access
	cout << "Enter volume in cubic feet: ";
	cin >> (*ps).volume; // method 2 for member access
	cout << "Enter price: $";
	cin >> ps->price;
	
	cout << "Name: " << (*ps).name << endl;
	cout << "Volume: " << ps->volume << endl;
	cout << "Price: $" << ps->price << endl;
	delete ps;

	return 0;
}

