#include <stddef.h>
#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in a sorted array using
 *                   the Advanced Binary search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if not found.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (advanced_binary_recursive(array, 0, size - 1, value));
}

/**
 * advanced_binary_recursive - Recursively searches for a value in a sorted
 * array using the Advanced Binary search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @low: The starting index for the search.
 * @high: The ending index for the search.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if not found.
 */
int advanced_binary_recursive(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	if (low > high)
		return (-1);
	mid = (low + high) / 2;
	print_subarray(array, low, high);
	if (array[mid] == value)
	{
		if (mid > 0 && array[mid - 1] == value)
			return (advanced_binary_recursive(array, low, mid, value));
		return (mid);
	}
	if (array[mid] < value)
		return (advanced_binary_recursive(array, mid + 1, high, value));
	return (advanced_binary_recursive(array, low, mid - 1, value));
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
