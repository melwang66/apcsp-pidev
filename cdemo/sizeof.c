#include <stdio.h>

int main()
{
	int a = 545;

	printf("int a value %d (oct %o, hex %x) and size %d bytes.\n", a, a, a, sizeof(a));

	char b = 'R';
	printf("char b value %c (oct %o, hex %x) and size %d bytes.\n", b, b, b, sizeof(b));

	float c = 9.47268;
	printf("float c value %f (oct %o, hex %x) and size %d bytes.\n", c, c, c, sizeof(c));

	double d = 6.983;
	printf("double d value %d (oct %o, hex %x) and size %d bytes.\n", d, d, d, sizeof(d));
}
