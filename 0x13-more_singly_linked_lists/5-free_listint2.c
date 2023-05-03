#include "lists.h"

/**
 * free_listint2 - frees linked lists
 * @head: pointer to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *perm;

	if (head == NULL)
		return;

	while (*head)
	{
		perm = (*head)->next;
		free(*head);
		*head = perm;
	}

	*head = NULL;
}
