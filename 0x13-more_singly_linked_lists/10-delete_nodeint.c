#include "lists.h"

/**
  * delete_nodeint_at_index - deletes a node at a given index
  * @head: pointer to pointer to head node
  * @index: the given index
  * Return: 1 on success, -1 on failure
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *curr_node, *temp;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	curr_node = *head;
	if (index == 0)
	{
		*head = curr_node->next;
		free(curr_node);
		return (1);
	}
	while (curr_node != NULL && count < index - 1)
	{
		curr_node = curr_node->next;
		count++;
	}
	if (curr_node == NULL || curr_node->next == NULL)
	{
		return (-1);
	}
	temp = curr_node->next->next;
	free(curr_node->next);
	curr_node->next = temp;
	return (1);
}
