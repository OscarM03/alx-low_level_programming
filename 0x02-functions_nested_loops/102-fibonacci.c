#include <stdio.h>
/**
 * main -  prints the first 50 Fibonacci numbers
 * Return: 0
 */
int main(void)
{

	unsigned long long int a = 1;
	unsigned long long int b = 2;
	int n;

	printf("%lld, %lld, ", a, b);

	for (n = 2; n < 50; n++)
	{
		unsigned long long int c = a + b;

		printf("%lld", c);

		if (n != 49)
		{
			printf(", ");
		}
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}

