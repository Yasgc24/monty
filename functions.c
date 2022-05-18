#include "main.h"

/**
 * new_node - Create new node
 * @n: data for the new node
 * Return: new node
 */

stack_t *new_node(int n)
{
	stack_t *new_node = (stack_t *)malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		dprintf(STDERR_FILENO, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	return (new_node);
}

#include "lists.h"

/**
 * free_dlistint -  frees a dlistint_t list
 * @head: pointer to head
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

