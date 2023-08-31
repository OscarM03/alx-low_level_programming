#include "main.h"
/**
  * get_endianness - checks the endianness
  * Return: void
  */
int get_endianness(void)
{
	int i = 1;
	char *ptr;

	ptr = (char *)&i;

	if (*ptr == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
