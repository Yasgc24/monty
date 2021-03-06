#include "monty.h"

/**
 * _swap - swaps the top two elements of the stack
 * @stack: Stack
 * @line_number: Numer of the line
 * Return: void
 */

void _swap(stack_t **stack, unsigned int line_number)
{
	int i = 0;

	if (*stack == NULL || (*stack)->prev == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		i = (*stack)->n;
		(*stack)->n = (*stack)->prev->n;
		(*stack)->prev->n = i;
	}
}
