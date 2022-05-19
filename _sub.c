#include "monty.h"

/**
 * _add - subtracts the top element of the stack
 * from the second top element of the stack
 * @stack: Stack
 * @line_number: Number of the line
 * Return: void
 */

void _sub(stack_t **stack, unsigned int line_number)
{
        stack_t *temp = NULL;
        int subs = 0;

        if (*stack == NULL || (*stack)->next == NULL)
        {
                fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
                exit(EXIT_FAILURE);
        }
        temp = *stack;
        subs = temp->next->n - temp->n;
        temp->next->n = subs;
        _pop(stack, line_number);
}
