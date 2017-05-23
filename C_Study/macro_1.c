#include <stdio.h>
#define square(x) (x)*(x)

int macro_1(void) {
	printf("square(3) : %d\n", square(3));
	return 0;
}