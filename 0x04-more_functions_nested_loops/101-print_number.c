#include "main.h"
/**
  * print_number -  prints an integer
  * @n: parameter
  * Return: 0
  */
void print_number(int n)
{
	if (n >= 10 && n < 100)
	{
		_putchar('0' + n / 10);
		_putchar('0' + n % 10);
	} else if (n >= 100 && n < 1000)
	{
		_putchar('0' + n / 100);
		_putchar('0' + (n / 10) % 10);
		_putchar('0' + n % 10);
	} else if (n >= 1000 && n < 10000)
	{
		_putchar('0' + n / 1000);
		_putchar('0' + (n / 100) % 10);
		_putchar('0' + (n / 10) % 10);
		_putchar('0' + n % 10);
	} else if (n < 0)
	{
		if (n < 0)
		{
			_putchar('-');
			n = -n;
		}
		_putchar('0' + n / 10);
		_putchar('0' + n % 10);
	} else
	{
		_putchar('0' + n);
	}
}