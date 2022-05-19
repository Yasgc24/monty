#include "monty.h"

/**
 * _add - adds the top two elements of the stack
 * @stack: Stack
 * @line_number: Number of the line
 * Return: void
 */

void _add(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	int sum = 0;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	sum = temp->n + temp->next->n;
	temp->next->n = sum;
	_pop(stack, line_number);
}
