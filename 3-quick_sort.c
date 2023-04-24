#include "sort.h"

/**
* quick_sort - sort the element given
* @array: the element of the array is given here
* @size: specify the size of the array
*/
void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
return;

lum_sort(array, size, 0, size - 1);

/* Coded by EnGentech */
}
