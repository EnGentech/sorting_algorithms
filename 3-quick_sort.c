#include "sort.h"

/**
* swp - swap the content of a to b and vice versa
* @i: swap to j
* @j: swap to i
*/
void swp(int *i, int *j)
{
int tmp;

tmp = *i;
*i = *j;
*j = tmp;

/* Coded by EnGentech */
}

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

/**
* lum_part - split array into two parts considering size
* @array: get the data element of array type
* @size: determine the length of the array
* @low: determine the lowest index of the element
* @high: determine the highest index of the element
* Return: return up value
*/
int lum_part(int *array, size_t size, int low, int high)
{
int up, down, *pivot;

pivot = array + high;
for (up = down = low; down < high; down++)
{
if (array[down] < *pivot)
{
if (up < down)
{
swp(array + down, array + up);
print_array(array, size);
}
up++;
}
}

if (array[up] > *pivot)
{
swp(array + up, pivot);
print_array(array, size);
}
return (up);

/* Coded by EnGentech */
}

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
