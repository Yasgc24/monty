#include "monty.h"

int global_number;

/**
 * _pint - prints the value at the top of the stack,
 * followed by a new line
 * @stack: Stack
 * @line_number: Number of the line
 * Return: void
 */

void _pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
