#include "monty.h"

/**
 * _getfunc - select the function
 * @ltoken: line from the bytecode
 * Return: pointer to the selected function or NULL if failure
 */

int (*_getfunc)(stack_t **stack, char *arguments, char *token, unsigned int line_number)
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
		if (strcmp(array_funct[i].opcode, arg) == NULL)
		{
			if (strcmp(arg, "push"))
			{
				if (isdigit(token) == 1)
					global_number = atoi(token);
				else
					return (1);
			}
			array_funct[i].f(stack, line_number);
			break;
		}
		if (array_funct[i].opcode == NULL)
			return (2);
	}
	return (0);
}
