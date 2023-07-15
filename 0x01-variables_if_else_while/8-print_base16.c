#include <stdio.h>
/**
 * main - Print  all the numbers of base 16 in lowercase
 * Return: 0 (must)
 */
int main(void)
{
	int n;
	char a;

	for (n = 0; n < 10; n++)
	{
		putchar('0' + n);
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
