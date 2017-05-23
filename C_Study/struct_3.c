#include <stdio.h>

struct TEST {
	int c;
};

int struct_3(void) {
	struct TEST t;
	struct TEST *pt = &t;

	printf("(*pt).c=0;\n");
	(*pt).c = 0;
	printf("t.c : %d\n", t.c);
	pt->c = 1;
	printf("pt->c=1;\nt.c : %d\n", t.c);

	return 0;
}