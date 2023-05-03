#include "lists.h"

/**
 * sum_listint - calc the sum of all data
 * @head: first node
 *
 * Return: resulting sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *perm = head;

	while (perm)
	{
		sum += perm->n;
		perm = perm->next;
	}

	return (sum);
}
