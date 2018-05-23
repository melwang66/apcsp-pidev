#include <stdio.h>

int main()
{
	int a;
	int b = 3;
	int c;

	a = 2;
	c = a + b;
	printf("Sum of %d and %d is %d\n", a, b, c);

	int e;
	e = a;
	a = c;
	c = e;
	printf("A is equal to %d, B is equal to %d, C is equal to %d.\n", a, b, c);
}
