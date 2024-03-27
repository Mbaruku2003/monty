#include "monty.h"
/**
 * cpall - prints all elements of a header
 * @head: the head pointer of all the locations of the list
 * @count: counts the elements of the header
 * Return: void
 */
void c_pall(stack_t **head, unsigned int count)
{
	stack_t *h;
	(void)count;

	h = *head;
	if (h == NULL)
		return;
	while (h != NULL)
	{
		printf("%d", h->n);
		h = h->next;
	}
}
