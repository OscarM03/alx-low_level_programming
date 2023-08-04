#include <stdio.h>
#include <stdlib.h>
/**
  * main - print the products of two arg
  * @argc: arg count
  * @argv: array of arg
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int j;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	j = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", j);

	return (0);
}
