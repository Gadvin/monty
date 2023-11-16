#include "monty.h"

/**
 * _queue - Converts a stack to a queue.
 * @stack: A pointer to the top mode node of a stack_t linked list.
 * @line_no: The current working line number of a Monty bytecodes file.
 */
void _queue(stack_t **stack, unsigned int line_no)
{
	(*stack)->n = QUEUE;
	(void)line_no;
}
