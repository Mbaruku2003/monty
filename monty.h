#ifndef MONTY_H
#define MONTY_H

#include <ctype.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
/**
 * struct b_s - contain args, file, line and content
 * @queues: the value
 * @stack_length:lines contents
 * Description: carries values through program
 */
typedef struct b_s
{
	int queues;
	size_t stack_length;
} b_t;

#define STACK 0
#define QUEUE 1

extern b_t bit;

void d_nop(stack_t **stack, unsigned int line_number);
void d_push(stack_t **stack, unsigned int line_number);
void d_pop(stack_t **stack, unsigned int line_number);
int dpull(stack_t **head, unsigned int count);
void d_pint(stack_t **stack, unsigned int line_number);
void d_add(stack_t **stack, unsigned int line_number);
void free_stack(stack_t *head);
void dqueue(stack_t **head, unsigned int count);
void dqueue(stack_t **head, unsigned int line_number);

#endif
