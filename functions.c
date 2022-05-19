#include "monty.h"

/**
 * free_dlistint -  frees a dlistint_t list
 * @stack: stack
 * Return: void
 */

void free_dlistint(stack_t **stack)
{
	stack_t *temp;

	while (*stack)
	{
		temp = (*stack);
		(*stack) = temp->prev;
		free(temp);
	}
}

/**
* _isdigit - checks a digit
* @c: character
* Return: 0
*/

int _isdigit(char *c)
{
	char *temp = c;

	if (c == NULL)
		return (0);
	if (*temp == '-')
		temp++;
	while (*temp != '\0')
	{
		if (*temp >= '0' || *temp <= '9')
			return (1);
	}
	temp++;
	return (0);
}
