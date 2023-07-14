#include <stdio.h>
/**
 * main - Output, small letters
 * Return: 0 (must)
 */
int main(void)
{
	char s;

	for (s = 'a'; s <= 'z'; s++)
	{
		putchar(s);
	}
	putchar('\n');

	return (0);
}
