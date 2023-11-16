#include "monty.h"

/**
 * _pstr - function Prints the string contained in a stack_t linked list
 * @stack: A pointer to the top mode node of a stack_t linked list
 * @line_no: The current working line number of a Monty bytecodes file
 */
void _pstr(stack_t **stack, unsigned int line_no)
{
	stack_t *tmp = (*stack)->next;

	while (tmp && tmp->n != 0 && (tmp->n > 0 && tmp->n <= 127))
	{
		printf("%c", tmp->n);
		tmp = tmp->next;
	}

	printf("\n");

	(void)line_no;
}
