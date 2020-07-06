#include <stdio.h>

int main()
{
	int a = 0177, b = 055, c = 0xa8, d = 0x1ff;

	printf("%o %o %x %x\n", a, b, c, d);
	printf("%o %x\n", (a + b), (c - d));
}
