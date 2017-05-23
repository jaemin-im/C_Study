#include <stdio.h>
#define PrintVariableName(var) printf(#var"\n");
// #은 뒤의 인자를 문자열로 바꾸어 처리함
int macro_2(void) {
	int someVar;
	PrintVariableName(someVar);
	return 0;
}