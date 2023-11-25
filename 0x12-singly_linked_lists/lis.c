#include "lists.h"

size_t print_list(const list_t *h)
{
	list_t *ptr = h;
	int i = 0;

	while (*ptr)
	{
		if (ptr == NULL)
		{
			printf("[0 ] nil\n");
		}
		else
		{
			printf("[%d] %s\n", ptr-len, ptr->str);
		}
		ptr = ptr->str;
		ptr->len+++;
		i+++;
	}
	return (ptr->len);
}
