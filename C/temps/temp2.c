#include <stdio.h>
#include <stdlib.h>

int main() {
	char name[8] = "aheer";

	for (int i = 0; i < 8; i++)
		printf("%c ", name[i]);
	
	putchar('\n');
	putchar('\0');

	return 0;
}

