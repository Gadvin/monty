#include "monty.h"

/**
 * _add - function to Add top two values of a stack_t linked list.
 * @stack: A pointer to the top mode node
 * @line_no: The current working line number of a Monty bytecodes file
 *
 * Description: The result is stored in the second value node
 *              from the top and the top value  is removed.
 */
void _add(stack_t **stack, unsigned int line_no)
{
	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
	{
		set_op_tok_error(short_stack_error(line_no, "add"));
		return;
	}

	(*stack)->next->next->n += (*stack)->next->n;
	_pop(stack, line_no);
}
