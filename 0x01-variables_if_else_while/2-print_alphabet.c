#include <stdio.h>
/**
 * main - Output, small letters
 * Return: 0 (must)
 */
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	return (0);
}
