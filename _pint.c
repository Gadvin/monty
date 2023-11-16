#include "monty.h"

/**
 * _pint - Prints the top value of a stack_t linked list.
 * @stack: A pointer to the top mode node of a stack_t linked list.
 * @line_no: The current working line number of a Monty bytecodes file.
 */

void _pint(stack_t **stack, unsigned int line_no)
{
	if ((*stack)->next == NULL)
	{
		set_op_tok_error(pint_error(line_no));
		return;
	}

	printf("%d\n", (*stack)->next->n);
}
