#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
  * print_listint - prints the elements of a linked list
  * @h: the number of elements
  *
  * Return: size of linked list
  */
size_t print_listint(const listint_t *h)
{
	listint_t *head;
	listint_t *temp = head;

	while (temp != NULL)
	{
		printf("%d ", temp->n);
		temp = temp->next;
	}
}
