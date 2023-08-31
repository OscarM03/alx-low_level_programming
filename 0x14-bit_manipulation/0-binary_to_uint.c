#include "main.h"
/**
  * binary_to_uint - convert binary to int
  * @b: string of 0s and 1s
  * Return: the number
  */
unsigned int binary_to_uint(const char *b)
{
	int i, j, k, m = 0, n = 0;
	int count = 0, sum = 0, power;

	while (b[n] != '\0')
	{
		count++;
		n++;
	}
	for (i = count - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		else
		{
			k = (b[i] - '0');
			power = 1;
			for (j = 0; j < m; j++)
			{
				power *= 2;
			}
			k *= power;
			sum += k;
			m++;
		}
	}
	return (sum);
}


