#include "monty.h"

/**
 * _swap - Swaps the top two value elements of a stack_t linked list
 *
 * @stack: A pointer to the top mode node of a stack_t linked list
 *
 * @line_no: The current working line number of a Monty bytecodes file
 */
void _swap(stack_t **stack, unsigned int line_no)
{
	stack_t *tmp;

	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
	{
		set_op_tok_error(short_stack_error(line_no, "swap"));
		return;
	}

	tmp = (*stack)->next->next;
	(*stack)->next->next = tmp->next;
	(*stack)->next->prev = tmp;
	if (tmp->next)
		tmp->next->prev = (*stack)->next;
	tmp->next = (*stack)->next;
	tmp->prev = *stack;
	(*stack)->next = tmp;
}
