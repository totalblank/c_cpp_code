#include <stdio.h>
#include <stdlib.h>
int binsearch(int x, int v[], int n);

int main() {
	int array[] = {1,6,9,11,20,60,71};
	int n = 7;
	int x = 20;
	int pos = binsearch(x, array, n);
	printf("index: %d, item: %d\n.", pos, array[pos]);
	return 0;
}

/* binsearch: find x in v[0] <= v[1] <= ... <= v[n-1]
 * Provided that v[] is a sorted array
 * */
int binsearch(int x, int v[], int n) {
	int low, high, mid;

	low = 0;
	high = n - 1;
	while (low <= high) {
		mid = (low + high) / 2;
		if (x < v[mid])
			high = mid - 1;
		else if (x > v[mid])
			low = mid + 1;
		else
			return mid;
	}

	return -1; /* no match */
}

