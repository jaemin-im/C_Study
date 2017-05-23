#include <stdio.h>

void add_number(int* p_arr);

int func_2(void) {
	int arr[3];
	int i;

	for (i = 0; i < 3; i++) {
		scanf("%d", &arr[i]);
	}

	add_number(arr);

	printf("배열의 각 원소 : %d %d %d\n", arr[0], arr[1], arr[2]);

	return 0;
}

void add_number(int* p_arr) {
	int i;
	for (i = 0; i < 3; i++) {
		p_arr[i]++;
	}
}