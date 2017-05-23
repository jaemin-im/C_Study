#include <stdio.h>
#pragma pack(1) // 구조체를 1바이트 단위로 정렬하시오.

typedef struct Weird {
	char arr[2];
	int i;
} Weird;

int pragma_1(void) {
	Weird a;
	printf("size of a : %d\n", sizeof(a));
	return 0;
}