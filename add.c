#include "monty.h"
/**
 * adds_node - adds a node to the head of the stack
 * @head: the head of the stack
 * @n: the new element
 * Return: void
 */
void d_add(stack_t **stack, unsigned int line_number)
{
	int n = 0;

	if (bit.stack_length < 2)
	{
		dprintf(STDOUT_FILENO,
				"L%u: can't add\n",
				line_number);
		exit(EXIT_FAILURE);
	}
	n += (*stack)->n;
	d_pop(stack, line_number);
	(*stack)->n += n;
}
