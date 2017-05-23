#include <stdio.h>

int string_4(void) {
	int num;
	char c;

	printf("숫자를 입력하세요 : ");
	scanf("%d", &num);

	fflush(stdin); // stdin 버퍼를 비움 : GCC에서는 위험한 방법
	
	printf("문자를 입력하세요 : ");
	scanf("%c", &c);

	return 0;
}