#include "main.h"
/**
* puts_half - print the last half of the string
* @str: parameter
* Return: 0
*/
void puts_half(char *str)
{
	int l = 0, a, i;

	while (str[l] != '\0')
	{
		l++;
	}

	a = (l + 1) / 2;

	for (i = a; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
