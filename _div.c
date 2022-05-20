#include "monty.h"

/**
 * _div - divides the second top element of the
 * stack by the top element of the stack
 * @stack: Stack list
 * @line_number: Number of th line
 * Return: void
 */

void _div(stack_t **stack, unsigned int line_number)
{
	int div = 0;

	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	else if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	div = (*stack)->next->n / (*stack)->n;
	(*stack)->next->n = div;
	_pop(stack, line_number);
}
