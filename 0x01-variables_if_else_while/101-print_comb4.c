#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 * Return: 0 (must)
 */
int main(void)
{
	int n1;

	for (n1 = 0; n1 < 10; n1++)
	{
		int n2;

		for (n2 = 0; n2 < 10; n2++)
		{
			int n3;

			for (n3 = 0; n3 < 10; n3++)
			{

				if (n1 != n2 && n2 != n3 && n1 < n2 && n2 < n3)
				{
					putchar('0' + n1);
					putchar('0' + n2);
					putchar('0' + n3);

					if (n1 != 7 || n2 != 8 || n3 != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

