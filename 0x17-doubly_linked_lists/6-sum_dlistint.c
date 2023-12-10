#include "lists.h"

/**
 * sum_dlistint - computes the sum of all data of a list
 * @head: pointer to the first node
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
