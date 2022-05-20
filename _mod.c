#include "monty.h"

/**
 * computes the rest of the division of the second
 * top element of the stack by the top element of the stack
 * @stack: stack of list
 * @line_number: number of the line
 * Return: void
 */

void _mod(stack_t **stack, unsigned int line_number)
{
	int mod = 0;

	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero", line_number);
		exit(EXIT_FAILURE);
	}
	else if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	mod = (*stack)->next->n % (*stack)->n;
	(*stack)->next->n = mod;
	_pop(stack, line_number);
}
