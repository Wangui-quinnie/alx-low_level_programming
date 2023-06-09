#include "main.h"

/**
  *reverse_array - reverses the content of an array of integers
  *@a: pointer to the first element of the array
  *@n: number of elements of the array
  *Return: 0
  */

void reverse_array(int *a, int n)
{
	int i;
	int temp = 0;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
