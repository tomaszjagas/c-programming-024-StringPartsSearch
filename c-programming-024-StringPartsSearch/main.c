#include <stdio.h>
#include <ctype.h>

int main() {
	char buf[100]; // input buffer
	int nLetters = 0; // nr of letters in input
	int nDigits = 0; // nr of digits in input
	int nPunct = 0; // nr of punctuation in input

	printf("Enter string of less than %d characters:\n", 100);
	scanf("%s", buf); // read string into buffer

	int i = 0; // buffer index
	while (buf[i]) {
		if (isalpha(buf[i])) {
			++nLetters;
		}
		else if (isdigit(buf[i])) {
			++nDigits;
		}
		else if (ispunct(buf[i])) {
			++nPunct;
		}
		++i;
	}
	printf("\nYour string contain %d letters, %d digits and %d punctuation characters.\n", nLetters, nDigits, nPunct);

	return 0;
}