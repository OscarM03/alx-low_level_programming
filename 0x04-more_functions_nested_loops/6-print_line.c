#include "main.h"
/**
  * print_line - draws a straight line in the terminal
  * @n: parameter
  * Return: 0
  */
void print_line(int n)
{
	int b;

	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		for (b = 0; b < n; b++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
