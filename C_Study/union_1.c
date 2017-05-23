#include <stdio.h>

union A {
	int i;
	char j;
};

int union_1(void) {
	union A a;
	a.i = 0x12345678;
	printf("%x", a.j);
	return 0;
}