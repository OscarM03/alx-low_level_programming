#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers
 * @n: paramater
 * Return: 0
 */
void print_to_98(int n)
{

	int a = 98;

	if (n < a)
	{
		while (n < a)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > a)
	{
		while (n > a)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("%d\n", n);
}


