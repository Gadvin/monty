#include "monty.h"

/**
 *_mod - func that Computes the modulus of the second value from the
 *             top of a stack_t linked list  by the top value.
 * @stack: A pointer to the top mode node
 * @line_no: The current working line number
 *
 * Description: The result is stored in the second value node
 *              from the top and the top value is removed.
 */
void _mod(stack_t **stack, unsigned int line_no)
{
	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
	{
		set_op_tok_error(short_stack_error(line_no, "mod"));
		return;
	}

	if ((*stack)->next->n == 0)
	{
		set_op_tok_error(div_error(line_no));
		return;
	}

	(*stack)->next->next->n %= (*stack)->next->n;
	_pop(stack, line_no);
}
