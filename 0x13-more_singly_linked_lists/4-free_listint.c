#include "lists.h"

/**
 * free_listint - frees a list thats linked
 * @head: listint_t freed
 */

void free_listint(listint_t *head)
{
	listint_t *perm;

	while (head)
	{
		perm = head->next;
		free(head);
		head = perm;
	}
}
