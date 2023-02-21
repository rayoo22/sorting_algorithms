#include "sort.h"
#include <stdio.h>

/**
 * bubble_sort - function to sort an array
 * @array: array to sort
 * @size of @array
 */
void bubble_sort(int *array, size_t size)
{
	int i, j;
	int temp;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < (size - i - 1); j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
