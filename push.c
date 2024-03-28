#include "monty.h"
/**
 * checks_digit - checks that a string only contains digits
 * @arguenment: string being checked
 *
 * Return: 0 if only digits, else return 1
 */
static int checks_digit(char *arguenment)
{
	int i;

	for (i = 0; arguenment[i]; i++)
	{
		if (arguenment[i] == '-' && i == 0)
			continue;
		if (isdigit(arguenment[i]) == 0)
			return (1);
	}
	return (0);
}
/**
 * c_push - pushes to the top of a stack
 * @head: link to the list
 * @count: counts the number of elements
 */
void d_push(stack_t **stack, unsigned int line_number)
{
	int n;
	char *arguenment;

	arguenment = strtok(NULL, "\n\t\r ");
	if (arguenment == NULL || checks_digit(arguenment))
	{
		write(STDOUT_FILENO,
				"L%u: usage: push integer\n",
				line_number);
		exit(EXIT_FAILURE);
	}
	n = atoi(arguenment);
	if (!d_add(stack, n))
	{
		write(STDOUT_FILENO, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	bit.stack_length++;
}
