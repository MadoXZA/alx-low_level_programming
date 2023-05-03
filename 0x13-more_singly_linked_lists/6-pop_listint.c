#include "lists.h"

/**
 * pop_listint - deletes head node of list
 * @head: pointer to first element
 *
 * Return: the data inside element deleted or 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *perm;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	perm = (*head)->next;
	free(*head);
	*head = perm;

	return (num);
}
