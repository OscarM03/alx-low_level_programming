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
	float f;

	printf("Size of a char: %zu byte(s)", sizeof(a));
	printf("Size of an int: %zu byte(s)", sizeof(b));
	printf("Size of a long int: %zu byte(s)", sizeof(c));
	printf("Size of a long long int: %zu byte(s)", sizeof(d));
	printf("Size of a float: %zu byte(s)", sizeof(f));
	
	return (0);
}
