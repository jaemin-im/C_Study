#include <stdio.h>

int max_number(int* p_arr);

int func_3(void) {
	int arr[10];
	int i;

	for (i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}

	printf("입력한 배열 중 가장 큰 수 : %d\n", max_number(arr));
	
	return 0;
}

int max_number(int* p_arr) {
	int i;
	int max = p_arr[0];

	for (i = 1; i < 10; i++) {
		if (p_arr[i] > max) {
			max = p_arr[i];
		}
	}

	return max;
}