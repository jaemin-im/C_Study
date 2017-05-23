#include <stdio.h>
#include <stdlib.h>

int memoryallocate_2(void) {
	int i;
	int x, y;
	int **arr;

	printf("arr[x][y]를 만들 것입니다.\n");
	scanf("%d %d", &x, &y);

	arr = (int**)malloc(sizeof(int*)*x);
	// int*형의 원소를 x개 가지는 1차원 배열 생성

	for (i = 0; i < x; i++) {
		arr[i] = (int*)malloc(sizeof(int)*y);
	}

	printf("생성 완료!\n");

	for (i = 0; i < x; i++) {
		free(arr[i]);
	}
	free(arr);
	return 0;
}