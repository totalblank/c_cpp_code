#include <bits/stdc++.h>
#include <iostream>

#define ll long long

using std::cin;
using std::cout;
using std::endl;

void swap(char *a, char *b);

int main() {
	char arr[100];
	int c,items;
	items = 0;

	while ( (c=getchar()) != '\n') {
		if (!(c=='+')){
			arr[items] = c;
			items++;
		}
	}

	for (int i = 0; i < items - 1; i++) {
		for (int j = 0; j < items-i-1; j++){
			if (arr[j] > arr[j+1])
				swap(&arr[j], &arr[j+1]);
		}
	}


	for (int i = 0; i < items; i++) {
		(i==items-1) ? cout << arr[i] << endl : cout << arr[i] << '+';
	}

	return 0;
}

void swap(char *a, char *b) {
	char temp = *a;
	*a = *b;
	*b = temp;
}
