#include <stdio.h>

int pointer_1(void) {
	int arr[3] = { 1,2,3 };
	int *p_arr;

	p_arr = arr;

	printf("arr[1] = %d\n", arr[1]);
	printf("p_arr[1] = %d\n", p_arr[1]);

	return 0;
}