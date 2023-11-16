#include "monty.h"

/**
 * _stack - funcc that Converts a queue to a stack
 * @stack: A pointer to the top mode node of a stack_t linked list
 * @line_no: The current working line number of a Monty bytecodes file
 */
void _stack(stack_t **stack, unsigned int line_no)
{
	(*stack)->n = STACK;
	(void)line_no;
}
