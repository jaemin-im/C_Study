#include <stdio.h>

__inline int square(int a) {
	return a*a;
}

int inline_1(void) {
	printf("%d\n", square(3));
	return 0;
}