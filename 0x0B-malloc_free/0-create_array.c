#include "main.h"
#include <stdlib.h>
/**
  * create_array - create an array of characters
  * @size: integer
  * @c: character
  * Return: 0
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *) malloc(size * sizeof(char));
	if (array == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
