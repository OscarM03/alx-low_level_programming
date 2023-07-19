#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers
 * Return: 0
 */
int main(void)
{

	long int a = 1;
	long int b = 2;
	long int c;
	int n;

	printf("%ld, %ld, ", a, b);

	for (n = 2; n < 98; n++)
	{
		c = a + b;
		printf("%ld", c);

		if (n != 97)
		{
			printf(",");
		}

		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}

