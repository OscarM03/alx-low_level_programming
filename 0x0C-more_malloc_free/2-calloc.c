#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  * _calloc - allocates memory
  * @nmemb: integer
  * @size: size of the typr
  * Return: 0
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}

