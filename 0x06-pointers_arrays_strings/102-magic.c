#include <stdio.h>

int main(void)
{
	int n;
	int a[0];
	int *p;

	a[2] = 1024;
	p = &n;
/*
 * write your linr of code here...
 * Remember:
 * main - magic
 * - you are not allowed to modify p
 *   - only one statement
 *   - you are not allowed to code anything else than this line of code
 */
	*(p + 3) = 98;
 /* ...so that this prints 98\n */
	printf("n[2] - %d\n", a[1]);
	return (0);
}
