#include "monty.h"

/**
 * _getfunc - select the function
 * @stack: stack
 * @arguments: arguments
 * @token: tokens
 * @line_number: line command
 * Return: pointer to the selected function or NULL if failure
 */

int _getfunc(stack_t **stack, char *arguments, char *token, int line_number)
{
	instruction_t array_funct[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
		{"nop", _nop},
		{NULL, NULL}
	};

	int i;

	for (i = 0; array_funct[i].opcode; i++)
	{
		if (!strcmp(arguments, array_funct[i].opcode))
		{
			if (!strcmp(arguments, "push"))
			{
				if (_isdigit(token) == 1)
					global_number = atoi(token);
				else
					return (1);
			}
			array_funct[i].f(stack, (unsigned int)line_number);
			break;
		}
	}
	if (!array_funct[i].opcode)
		return (2);
	return (0);
}
