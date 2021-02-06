#include <stdio.h>
#include <math.h>

int _atoi(char s[]);

int main() {
	char s[] = "1122L";
	char digits[] = "482L";

	printf("%d\n", _atoi(s));
	printf("%d\n", _atoi(digits));
	return 0;
}

int _atoi(char s[]) {
	int i, n;

	n = 0;
	for(i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
		n = 10*n + (s[i] - '0');
	return n;
}

/* ascii characters are just numbers coded into characters,
 * so we can compare them and int format their output
 * >= '0' means if the numerical value of the current character
 * character is greater or equal to that of '0'
 *
 * the line 17 essentially append the current number
 * at the end of the previous number
 */
