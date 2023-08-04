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
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if ((argv[i][0] < '0' || argv[i][0] > '9') && argv[i][0] != '-')
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

