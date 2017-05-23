#include <stdio.h> 
#include "weird.h"
#include "weird.h"

int pragma_2(void)
{
	struct Weird a;
	a.i = 3;
	printf("Weird 구조체의 a.i : %d \n", a.i);
	return 0;
}