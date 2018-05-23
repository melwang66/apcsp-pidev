#include <stdio.h>

int main()
{
int a = 3;
int i = 1;
	for (int i = 1; i < 101; i++)
	{
		if (i%a == 0)
			printf("%d\n", i);
		if (i>100)
			break;
	}
}
