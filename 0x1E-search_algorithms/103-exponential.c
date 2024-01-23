#include <stdlib.h>
#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array using
 *                      the Exponential search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where the value is located, or -1 if not found.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, low, high;

	if (array == NULL || size == 0)
		return (-1);
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	low = bound / 2;
	high = (bound < size - 1) ? bound : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	return (bi_search(array, low, high, value));
}

/**
 * bi_search - Searches for a value in a sorted array using
 *                 the Binary search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @low: The starting index for the search.
 * @high: The ending index for the search.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if not found.
 */
int bi_search(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	while (low <= high)
	{
		print_subarray(array, low, high);
		mid = (low + high) / 2;

		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}

/**
 * print_subarray - Prints the elements of the array within the given range.
 * @array: A pointer to the first element of the array.
 * @low: The starting index.
 * @high: The ending index.
 */
void print_subarray(int *array, size_t low, size_t high)
{
	printf("Searching in array:");
	while (low <= high)
	{
		printf(" %d", array[low]);
		if (low < high)
			printf(",");
		low++;
	}
	printf("\n");
}
