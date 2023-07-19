#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers
 * Return: 0
 */
int main(void)
{

	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int c;
	int n;

	printf("%lu, %lu, ", a, b);

	for (n = 2; n < 98; n++)
	{
		c = a + b;
		printf("%lu", c);

		if (n != 97)
		{
			printf(", ");
		}

		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}

