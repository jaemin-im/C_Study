#include <stdio.h>

int string_3(void) {
	char words[30];

	printf("30자 이내의 문자열을 입력해주세요! : ");
	scanf("%s", words);

	printf("문자열 : %s\n", words);

	return 0;
}