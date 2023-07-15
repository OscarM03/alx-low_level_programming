#include <stdio.h>
/**
 * main - Print a-z excluding e and q
 * Return: 0 (must)
 */
int main(void)
{
	char s = 'a';

	while (s <= 'z')
	{
		if (s != 'q' && s != 'e')
		{
			putchar(s);
		}
		s++;
	}
	putchar('\n');
	return (0);
}
