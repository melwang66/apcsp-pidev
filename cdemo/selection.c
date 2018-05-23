#include <stdio.h>

int main()
{
	int a = 7;
	int b = 4;

	printf("a is equal to %d, b is equal to %d\n", a, b);

	if (a == 0)
	{
		printf("a is equal to 0\n");
	}
	else
	{
		printf("a is not equal to 0\n");
	}
	if (a == b)
	{
		printf("a is equal to b\n");
	}
	if (a != b)
	{
		printf("a is not equal to b\n");
	}
	if (a > b)
	{
		printf("a is greater than b\n");
	}
	if (b > a)
	{
		printf("b is greater than a\n");
	}
	if (a == 0 && b == 0)
	{
		printf("a and b are both equal to 0\n");
	}
	else
	{
		printf("a and b are not equal to 0 simultaneously\n");
	}
	if (a == 0 || b == 0)
	{
		printf("at least one of the two variables is equal to 0\n");
	}
	else
	{
		printf("neither a nor b are equal to 0\n");
	}
}
