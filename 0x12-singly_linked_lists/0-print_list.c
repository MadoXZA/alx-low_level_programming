#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints the elemenst of a linked list
 * @h: pointer to list_t
 *
 * Return: nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t l = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		l++;
	}
	return (l);
}
