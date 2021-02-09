#include <bits/stdc++.h>
#include <iostream>
#include <string>

#define ll long long

using std::cin;
using std::cout;
using std::endl;
using std::string;

void sort(char user_name[], int size);
void swap(char *xp, char *yp);

int main() {
	string name;
	cin >> name;
	int size = name.length();

	char user_name[size];
	for (int i = 0; i < size; i++)
		user_name[i] = name[i];

	sort(user_name, size);

	int count = 1;
	for (int i = 1; i < size; i++) {
		if ( !(user_name[i] == user_name[i-1]) )
			count++;
	}

	if (count % 2 == 0) {
		cout << "CHAT WITH HER!" << endl;
	} else {
		cout << "IGNORE HIM!" << endl;
	}

	return 0;
}

void sort(char arr[], int n)
{
    int i, j, min_idx;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
            min_idx = j;

        // Swap the found minimum element with the first element
        swap(&arr[min_idx], &arr[i]);
    }
}


void swap(char *xp, char *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
