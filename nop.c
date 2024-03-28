#include "monty.h"
/**
 * c_nop - implements the nop opcode
 * @head: the lists head
 * @counter: the number of elements
 * Return: void
 */
void dnop(stack_t **head, unsigned int counter)
{
	(void)counter;

	*head = NULL;
}
