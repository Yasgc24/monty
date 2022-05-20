#include "monty.h"

/**
 * _mul - multiplies the second top element
 * of the stack with the top element of the stack
 * @stack: Stack list
 * @line_number: Number of th line
 * Return: void
 */

void _mul(stack_t **stack, unsigned int line_number)
{
	int mul = 0;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	mul = (*stack)->next->n * (*stack)->n;
	_pop(stack, line_number);
	(*stack)->next->n = mul;
}
