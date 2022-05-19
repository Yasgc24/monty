#include "monty.h"

/**
 * _swap - swaps the top two elements of the stack
 * @stack: Stack
 * @line_number: Numer of the line
 * Return: void
 */

void _swap(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	int i = 0;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short", line_number);
		exit(EXIT_FAILURE);
	}
	i = temp->n;
	temp->n = temp->prev->n;
	temp->prev->n = i;
}
