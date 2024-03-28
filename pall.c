#include "monty.h"
/**
 * c_pall - prints all elements of a header
 * @head: the head pointer of all the locations of the list
 * @count: counts the elements of the header
 * Return: void
 */
void dpall(stack_t **head, unsigned int count)
{
	stack_t *h;
	(void)count;

	h = *head;
	while (h != NULL)
	{
		printf("%d", h->n);
		h = h->next;
		if (h == *head)
		{
			return;
		}
	}
}
