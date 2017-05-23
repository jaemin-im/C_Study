#include <stdio.h>
#define AddName(x,y) x##y
// ##은 앞과 뒤의 인자를 합치는 역할을 한다 (x##y == xy)

int macro_3(void) {
	int AddName(a, b);
	ab = 3;
	printf("%d\n", ab);
	return 0;
}