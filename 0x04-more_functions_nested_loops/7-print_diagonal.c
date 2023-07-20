#include "main.h"
/**
  * print_diagonal - draws a diagonal line on the terminal
  * @n: parameter
  * Return: 0
  */
void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
		for (b = 0; b < n; b++)
		{
			_putchar(' ');
		}

		_putchar('\n');
	}
}
