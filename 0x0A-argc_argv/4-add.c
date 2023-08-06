#include <stdio.h>
#include <stdlib.h>
/**
  * main - add numbers
  * @argc: arg count
  * @argv: arg
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		j = 0;

		if ((argv[i][j] < '0' || argv[i][j] > '9') && argv[i][j] != '-')
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}

