#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 * Return: 0
 */
void times_table(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			int results = a * b;

		if (results > 9)
		{
			_putchar('0' + results / 10);
			_putchar('0' + results % 10);
		} else
		{
			_putchar(' ');
			_putchar('0' + results % 10);
		}

		if (b == 9)
		{
			_putchar(',');
			_putchar(' ');
		} else
		{
			_putchar('\n');
		}

		}
	}
}
