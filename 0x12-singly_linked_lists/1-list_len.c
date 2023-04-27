#include "lists.h"

/**
 * list_len - determines length of linked list
 * @h: pointer to the first node./././
 *
 * Return: // size of the list////
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
