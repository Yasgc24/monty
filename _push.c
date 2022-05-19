#include "monty.h"

/**
 * _push - pushes an element to the stack
 * @stack: Stack
 * @line_number: Number of the line
 * Return: void
 */

void _push(stack_t **stack, unsigned int line_number)
{
	stack_t *new = (stack_t *)malloc(sizeof(stack_t));
	(void)line_number;

	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed");
		exit(EXIT_FAILURE);
	}

	new->n = global_number;
	new->next = NULL;
	new->prev = NULL;

	if (*stack)
	{
		(*stack)->next = new;
		new->prev = *stack;
		*stack = new;
	}
	else
	{
		*stack = new;
	}
}
