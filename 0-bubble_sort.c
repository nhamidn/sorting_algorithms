#include "sort.h"

/**
 * bubble_sort - Function that sort an array using the bubble sort algo
 * @array: array of integers
 * @size: size of the array
 * Return: Void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t size_b = size;

	while (size > 1)
	{
		i = 0;
		while (i < (size - 1))
		{
			if (array[i] > array[i + 1])
			{
				int tmp = array[i];

				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size_b);
			}
			i++;
		}
		size--;
	}
}
