#include <stdio.h>
/**
 * main - Print sizes of various types
 * Return: 0 (should return zero)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float g;

	printf("Size of a char: %lu byte(s)", sizeof(a));
	printf("Size of an int: %lu byte(s)", sizeof(b));
	printf("Size of a long int: %lu byte(s)", sizeof(c));
	printf("Size of a long long int: %lu byte(s)", sizeof(d));
	printf("Size of a float: %lu byte(s)" sizeof(g));
	
	return (0);
}
