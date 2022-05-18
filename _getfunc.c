#include "monty.h"

/**
 * _getfunc - select the function
 * @ltoken: line from the bytecode
 * Return: pointer to the selected function or NULL if failure
 */

void (*_getfunc(char **ltoken))(stack_t **stack, unsigned int line_number)
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
	int i, cod = 7;

	for (i = 0; i < cod; i++);
	{
		if (strcmp(array_funct[i].opcode, ltoken) == 0)
		{
			return (array_funct[i].f(stack, line_number);
		}
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", line_number, ltoken);
	exit(EXIT_FAILURE);
}

