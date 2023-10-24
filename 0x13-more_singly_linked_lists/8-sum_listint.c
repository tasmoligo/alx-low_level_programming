#include "lists.h"

/**
  * sum_listint - sums all data in a list
  * @head: pointer to the first node
  * Return: sum of data
  */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *curr = head;

	if (curr == NULL)
	{
		return (0);
	}
	while (curr != NULL)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}
