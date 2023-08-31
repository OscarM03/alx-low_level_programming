#include "main.h"
/**
  * flip_bits - flip bits
  * @n: int 1
  * @m: int 2
  * Return: bits flipped
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int d, bits;

	d = n ^ m;
	bits = 0;

	while (d > 0)
	{
		if ((d & 1) == 1)
		{
			bits++;
		}
		d >>= 1;
	}
	return (bits);
}
