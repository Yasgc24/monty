#include "monty.h"

/**
 * _pop - removes the top element of the stack
 * @stack: Stack
 * @line_number: Number of the line
 * Return: void
 */

void _pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (*stack == NULL || stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp = *stack;

	*stack = temp->next;

	if (temp->next)
		temp->next->prev = temp->prev;
	free(temp);
}
