#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *perm = *head;
	listint_t *current = NULL;
	unsigned int k = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(perm);
		return (1);
	}

	while (k < index - 1)
	{
		if (!perm || !(perm->next))
			return (-1);
		perm = perm->next;
		k++;
	}


	current = perm->next;
	perm->next = current->next;
	free(current);

	return (1);
}
