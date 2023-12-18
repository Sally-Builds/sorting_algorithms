#include "sort.h"

/**
 * bubble_sort - sorts the array from the smallest to largest
 * @array: array to sort
 * @size: size of the array
 *
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	int isSwap = 0;
	size_t i;
	size_t j;

	for (i = size - 1; i > 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			if (array[j] > array[j + 1])
			{
				int temp = array[j];

				array[j] = array[j + 1];
				array[j + 1] = temp;
				isSwap = 1;
				print_array(array, size);
			}
		}
		if (isSwap == 0)
			break;
	}
}
