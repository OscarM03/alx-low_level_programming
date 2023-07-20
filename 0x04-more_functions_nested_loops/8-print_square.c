#include "main.h"
/**
  * print_square - prints a square
  * @size: - parameter
  * Return: 0
  */
void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size - 1; b++)
			{
				_putchar('#');
			}
			_putchar('#');
			_putchar('\n');
		}
		_putchar('\n');
	}
}

