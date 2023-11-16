#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

#define STACK 0
#define QUEUE 1
#define DELIMS " \n\t\a\b"

extern char **op_toks;
char **op_toks = NULL;

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

char **strtow(char *str, char *delims);
char *get_int(int num);
char *get_next_word(char *str, char *delims);
int check_mode(stack_t *stack);
int div_error(unsigned int line_number);
int f_open_error(char *filename);
int get_numbase_len(unsigned int num, unsigned int base);
int get_word_count(char *str, char *delims);
int get_word_length(char *str, char *delims);
int init_stack(stack_t **stack);
int is_delim(char ch, char *delims);
int is_empty_line(char *line, char *delims);
int malloc_error(void);
int no_int_error(unsigned int line_number);
int pchar_error(unsigned int line_number, char *message);
int pint_error(unsigned int line_number);
int pop_error(unsigned int line_number);
void set_op_tok_error(int error_code);
int short_stack_error(unsigned int line_number, char *op);
int unknown_op_error(char *opcode, unsigned int line_number);
int usage_error(void);
unsigned int _abs(int);
unsigned int token_arr_len(void);
void (*get_op_func(char *opcode))(stack_t**, unsigned int);
void fill_numbase_buff(unsigned int num, unsigned int base, char *buff, int buff_size);
void free_stack(stack_t **stack);
void free_tokens(void);
void _add(stack_t **stack, unsigned int line_no);
void _div(stack_t **stack, unsigned int line_no);
void _mod(stack_t **stack, unsigned int line_no);
void _mul(stack_t **stack, unsigned int line_no);
void _nop(stack_t **stack, unsigned int line_no);
void _pall(stack_t **stack, unsigned int line_no);
void _pchar(stack_t **stack, unsigned int line_no);
void _pint(stack_t **stack, unsigned int line_no);
void _pop(stack_t **stack, unsigned int line_no);
void _pstr(stack_t **stack, unsigned int line_no);
void _push(stack_t **stack, unsigned int line_no);
void _queue(stack_t **stack, unsigned int line_no);
void _rotl(stack_t **stack, unsigned int line_no);
void _rotr(stack_t **stack, unsigned int line_no);
void _stack(stack_t **stack, unsigned int line_no);
void _sub(stack_t **stack, unsigned int line_no);
void _swap(stack_t **stack, unsigned int line_no);
int run_monty(FILE *script_fd);

#endif
