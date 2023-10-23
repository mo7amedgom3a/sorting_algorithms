#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * bubble_sort - Sort an array of integers in ascending order.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j = 0;
	bool swapped = true;

	if (array != NULL || size >= 2)
	{
		while (swapped)
		{
			swapped = false;
			for (i = 0; i < size - 1; i++)
			{
				if (array[i] > array[i + 1])
				{
					swap_ints(array + i, array + i + 1);
					print_array(array, size);
					swapped = true;
				}
			}
			j++;
		}
	}
}
