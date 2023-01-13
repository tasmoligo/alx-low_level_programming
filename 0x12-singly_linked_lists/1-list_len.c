#include "lists.h"

/**
  * list_len - gets the number of elements in a linked list_t list
  * @h: the list
  * Return: the number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t elem_num;

	elem_num = 0;
	while (h != NULL)
	{
		h = h->next;
		elem_num++;
	}
	return (elem_num);
}
