#include "monty.h"
/**
 * d_pint - print valuee at the top of stack
 * @stack: doble pointer to list
 * @line number
 * Return: void
 */
void d_pint(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack;

	if (var.stck_len == 0)
	{
		write(STDOUT_FILENO,
				"L%u: can't pint\n",
				line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", head->n);
}
