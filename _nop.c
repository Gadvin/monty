#include "monty.h"


/**
 * _nop - func to Do absolutely nothing for the Monty opcode 'nop'
 * @stack: A pointer to the top mode node of a stack_t linked list.
 * @line_no: The current working line number of a Monty bytecodes file.
 */
void _nop(stack_t **stack, unsigned int line_no)
{
	(void)stack;
	(void)line_no;
}
