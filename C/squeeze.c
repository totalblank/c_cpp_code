#include <stdio.h>
// squeeze: delete all c from s
void squeeze(char s[], int c);

int main() {
	char s[] = "I am 20 years old";
	squeeze(s, 97);
	printf("%s\n", s);

	return 0;
}

void squeeze(char s[], int c) {
	int i, j;
	for (i = j = 0; s[i] != '\0'; i++)
		if (s[i] != c)
			s[j++] = s[i];
	s[j] = '\0';
}

/*
 * Each time a non-c occurs, it is copied into the current
 * j position, and only then is j incremented to be ready
 * for the next character.
 */
