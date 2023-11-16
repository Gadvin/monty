#include "monty.h"

/**
 * _pchar - Prints the character in the top value
 *               node of a stack_t linked list.
 * @stack: A pointer to the top mode node of a stack_t linked list.
 * @line_no: The current working line number of a Monty bytecodes file.
 */
void _pchar(stack_t **stack, unsigned int line_no)
{
	if ((*stack)->next == NULL)
	{
		set_op_tok_error(pchar_error(line_no, "stack empty"));
		return;
	}
	if ((*stack)->next->n < 0 || (*stack)->next->n > 127)
	{
		set_op_tok_error(pchar_error(line_no,
					     "value out of range"));
		return;
	}

	printf("%c\n", (*stack)->next->n);
}
