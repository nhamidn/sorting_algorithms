#include "sort.h"

/**
 * selection_sort - Function that sort a list using selection algo
 * @array: array of integers
 * @size: size of the array
 * Return: Void
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0, j;

	if (size > 1 && array != NULL)
		while (i < size)
		{
			size_t min = i;

			j = i + 1;
			while (j < size)
			{
				if (array[j] < array[min])
					min = j;
				j++;
			}
			if (min != i)
			{
				int tmp;

				tmp = array[i];
				array[i] = array[min];
				array[min] = tmp;
				print_array(array, size);

			}
			i++;
		}
}
