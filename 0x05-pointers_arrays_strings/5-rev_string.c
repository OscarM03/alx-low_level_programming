#include "main.h"
/**
  * rev_string - Write a function that reverses a string
  * @s: parameter
  * Return: 0
  */
void rev_string(char *s)
{
	char *start = s;
	char *end = s;

	while (*end != '\0')
	{
		end++;
	}
	end--;
	while (start < end)
	{
		char b = *start;
		*start = *end;
		*end = b;
		start++;
		end--;
	}
}
