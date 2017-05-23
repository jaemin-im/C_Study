#include <stdio.h>
#include <string.h>

int memmove_1(void) {
	char str[50] = "I love Cheewing C hahaha";

	printf("%s\n", str);
	printf("memmove ÀÌÈÄ\n");
	memmove(str + 23, str + 17, 6);
	printf("%s", str);

	return 0;
}