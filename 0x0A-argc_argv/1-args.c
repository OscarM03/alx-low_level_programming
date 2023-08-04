#include <stdio.h>
/**
  * main - print number of arguments
  * @argc: arg counts
  * @argv: array of arg passed
  * Return: 0
  */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
