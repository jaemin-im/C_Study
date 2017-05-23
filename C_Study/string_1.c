#include <stdio.h>

int string_1(void) {
	char word[30] = { "long sentence" };
	char *str = word;

	printf("%s\n", str);

	return 0;
}