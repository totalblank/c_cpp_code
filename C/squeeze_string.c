/*
 * Exercise 2.4
 *
 * Let us write a version of squeeze(s1, s2) that deletes
 * each character in the string 1 that matches only any
 * character in the string s2
 *
 */

#include <stdio.h>
#define MAXLINE 1000

void mgetline(char line[], int maxline);
void squeeze(char s1[], char s2[]);

int main(void) {
	char s1[MAXLINE], s2[MAXLINE];
	putchar('s');
	putchar('1');
	putchar(':');
	putchar(' ');
	mgetline(s1, MAXLINE);

	putchar('s');
	putchar('2');
	putchar(':');
	putchar(' ');
	mgetline(s2, MAXLINE);

	squeeze(s1, s2);
	printf("%s\n", s1);
	return 0;
}

/* gets a line.
 * takes and stores
 * input characters
 * as long as the character
 * is not EOF or newline
 *
 * If the input character
 * is newline it is stored
 * at the last position
 * (before '\0')
 */

void mgetline(char s[], int lim) {
	int i,c;
	
	for(i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
		s[i] = c;

	if(c == '\n')
		s[i++] = c;

	s[i] = '\0';
}

/*
 * The way squeeze works is,
 * it takes each character
 * from the first string
 * and if there is no match found,
 * stores it with a new index k.
 * If there are no match found in s2,
 * it simply skips it.
 *
 * when the match is found,
 * s1[i] == s2[j]. So our 
 * first loop will end. The second
 * if condition will fail too as
 * s2 is not iterated till the end,
 * so we do not place the character in s1[k++]
 * and we have successfully skipped it.
 */

void squeeze(char s1[], char s2[]) {
	int i,j,k;
	k = 0;

	for (i=0; s1[i] != '\0'; ++i) {
		for (j=0; (s1[i]!=s2[j]) && s2[j]!= '\0'; ++j)
			;

		if(s2[j]=='\0')
			s1[k++] = s1[i];
	}

	s1[k] = '\0';
}
