#include "sort.h"

/**
* lum_sort - sort the array in assending order
* @array: get the elements of the array
* @size: get the size of the array
* @low: consider sorting the lower array from the pivot
* @high: consider sorting the higher array from the pivot
*/
void lum_sort(int *array, size_t size, int low, int high)
{
int half;

if (high - low > 0)
{
half = lum_part(array, size, low, high);
lum_sort(array, size, low, half - 1);
lum_sort(array, size, half + 1, high);
}

/* Coded by EnGentech */
}
