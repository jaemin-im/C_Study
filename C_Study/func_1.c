#include <stdio.h>

void swap(int* a, int* b);

int func_1(void) {
	int i, j;

	scanf("%d %d", &i, &j);

	printf("swap 이전 : %d %d\n", i, j);
	swap(&i, &j);
	printf("swap 이후 : %d %d\n", i, j);

	return 0;
}

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}