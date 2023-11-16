#include "monty.h"

/**
 * _rotl - func Rotates the top value to the bottom
 *
 * @stack: A pointer to the top mode node of a stack_t linked list
 *
 * @line_no: The current working line number of a Monty bytecodes file.
 */
void _rotl(stack_t **stack, unsigned int line_no)
{
	stack_t *top, *bottom;

	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
		return;

	top = (*stack)->next;
	bottom = (*stack)->next;
	while (bottom->next != NULL)
		bottom = bottom->next;

	top->next->prev = *stack;
	(*stack)->next = top->next;
	bottom->next = top;
	top->next = NULL;
	top->prev = bottom;

	(void)line_no;
}
