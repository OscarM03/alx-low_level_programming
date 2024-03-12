#include "search_algos.h"

/**
 * printarray - searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: array
 * @low: index of the first element in the array
 * @high: index of the last number in the array
 * Return: the index of the value or -1 if
 * the array is null or the value is not present
 */
void printarray(int array[], int low, int high)
{
	int i;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i < high)
		{
			printf(", ");
		}
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in an
 * array of integers using the Binary search algorithm
 * @array: pointer to the first element of the array
 * @size: Number of elememnt in the array
 * @value: The value to search
 * Return: first index where value is located or
 * -1 if the value is not present in array or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid, low = 0, high = size - 1;

  if (array == NULL)
  {
    return (-1);
  }

	while (low <= high)
	{
		printarray(array, low, high);

		mid = low + (high - low) / 2;

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return (-1);
}
