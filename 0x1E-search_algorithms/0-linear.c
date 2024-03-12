#include "search_algos.h"

/**
* printchar - prints a character
* @c: character to print
* Return: char count
*/

int printchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * linear_search - searches for a value in an
 * array of integers using the Linear search algorithm
 * @array: pointer to the first element of the array
 * @size: Number of elememnt in the array
 * @value: The value to search
 * Return: first index where value is located or
 * -1 if the value is not present in array or if array is NULL
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
