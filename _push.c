#include "monty.h"

/**
 * _push - pushes an element to the stack
 * @stack: Stack
 * @line_number: Number of the line
 * Return: void
 */

void _push(stack_t **stack, unsigned int line_number)
{
	stack_t *new = NULL;
	(void)line_number;

	new = new_Node(global_number);

	new->next = *stack;
	if (*stack)
		(*stack)->prev = new;
	*stack = new;
}
