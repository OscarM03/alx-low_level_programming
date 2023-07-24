#include "main.h"
/**
 *  puts2 -  prints every other character of a string
 * @str: parameter
 * Return: 0
 */
void puts2(char *str)
{
	char *start = str;

	while (*start != '\0')
	{
		if (*start >= '0' && *start <= '9' && *start % 2 == 0)
		{
			_putchar(*start);
		}
		start++;
	}
	_putchar('\n');
}
