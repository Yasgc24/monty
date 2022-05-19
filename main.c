#include "monty.h"

/**
 * main - Monty interpreter
 * @argc: Number if arguments
 * @argv: Argguments
 * Return: 0
 */

int main( int argc, char **argv)
{
	if (argc == 2)
	{
		read_file(argv[1]);
	}
	else
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	return (0);
}

/**
 * read_file - function that open, reads and execute the commands
 * @argv: arguments
 * Return: void
 */

void read_file(char *argv)
{
	FILE *fd;
	char *line, *token, *arguments;
	stack_t *stack = NULL;
	unsigned int line_number = 0, res = 0;
	size_t buff = 0;

	fd = fopen(argv, "r");
	if (fd)
	{
		while(getline(&line, &buff, fd) != -1)
		{
			line_number++;
			arguments = strtok(line, DELIM);
			if (arguments == NULL)
			{
				free(arguments);
				continue;
			}
			token = strtok(NULL, DELIM);
			res = _getfunc(&stack, arguments, token, line_number);
			if (res == 1)
			{
				fprintf(stderr, "L%d: usage: push integer\n", line_number);
			}
			else if (res == 2)
				fprintf(stderr, "L%d: unknown instruction %s\n", line_number, token);
			exit(EXIT_FAILURE);
		}
		free(line);
		free_dlistint(&stack);
		fclose(fd);
	}
	else
	{
		fprintf(stderr, "Error: Can't open file <file>\n");
	}
}
