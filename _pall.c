#include "monty.h"

/**
 * _pall - prints all the values on the stack,
 * starting from the top of the stack
 * @stack: Stack
 * @line_number: Number of the line
 * Return: void
 */

void _pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	(void)line_number;

	temp = *stack;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
