#include "lists.h"

/**
 * _strlen - returns the length of the string.
 * @s: the string whose length to check//
 *
 * Return: // integer length of string
 */
int _strlen(char *s)
{
	int i = 0;

	if (!S)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * print_list - prints a linked lists/linked lists
 * @h: /pointer to the first node
 *
 * Return:the size of the list
 */
size_t print_list(const list_t *h)
{
	sie_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}
