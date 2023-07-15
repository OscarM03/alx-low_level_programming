#include <stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: o (must)
 */
int main(void)
{
	int t1, o1;
	int t2, o2;

	for (t1 = 0; t1 < 10; t1++)
	{
	for (o1 = 0; o1 < 10; o1++)
	{
	for (t2 = 0; t2 < 10; t2++)
	{
	for (o2 = 0; o2 < 10; o2++)
	{
	if (t1 < t2 || (t1 == t2 && o1 < o2))
	{
	putchar('0' + t1);
	putchar('0' + o1);
	putchar(' ');
	putchar('0' + t2);
	putchar('0' + o2);

	if (t1 != 9 || o1 != 8 || t2 != 9 || o2 != 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
