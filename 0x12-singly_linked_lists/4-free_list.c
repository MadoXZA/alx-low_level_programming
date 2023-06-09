#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list_t to be freed
 */

void free_list(list_t *head)
{
	list_t *perm;

	while (head)
	{
		perm = head->next;
		free(head->str);
		free(head);
		head = perm;
	}
}
