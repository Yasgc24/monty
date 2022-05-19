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

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short", line_number);
		exit(EXIT_FAILURE);
	}
	temp = (*stack)->next;
	(*stack)->next = temp->next;

	if (temp->next)
		temp->next->prev = *stack;

	temp->next; = *stack;
	temp->prev = NULL;
	(*stack)->prev = temp;
	*stack = temp;
}
