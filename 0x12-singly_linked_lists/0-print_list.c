#include "lists.h"
#include <stdio.h>
/**
 * print_list - verification
 * @h: listheader
 * Return: list size
 */
size_t print_list(const list_t *h)
{
	size_t cp = 0;

	while (h != NULL)
	{
		printf("[%u] %s\n", h->str == NULL ? 0 : h->len
		       , h->str == NULL ? "(nil)" : h->str);
		cp++;
		h = h->next;
	}
	return (cp);
}
