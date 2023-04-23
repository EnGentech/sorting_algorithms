#include "sort.h"

/**
 * insertion_sort_list - sorting all elements using insertion method
 *
 * @list: sorting through doubly link list
 */

void insertion_sort_list(listint_t **list)
{
listint_t *c_list;

if (list == NULL || *list == NULL || (*list)->next == NULL)
{
return;
}

c_list = (*list)->next;

while (c_list != NULL)
{
while (c_list->prev != NULL && c_list->n < c_list->prev->n)
{
c_list->prev->next = c_list->next;
if (c_list->next != NULL)
{
c_list->next->prev = c_list->prev;
}

c_list->next = c_list->prev;
c_list->prev = c_list->prev->prev;
c_list->next->prev = c_list;

if (c_list->prev == NULL)
{
*list = c_list;
}
else
{
c_list->prev->next = c_list;
}

print_list(*list);
}
c_list = c_list->next;
}

/* coded by EnGentech */
}
