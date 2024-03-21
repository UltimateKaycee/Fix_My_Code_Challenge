#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Function to print a doubly linkedlist of int
 *
 * @h: ptr to first element of a list
 *
 * Return: number of element printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n;

	n = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
