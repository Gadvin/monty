#include "monty.h"

/**
 * get_next_word - function to get the next word in a string
 *
 * @str: string to get next word
 * @delims: delimitors used
 *
 * Return: pointer to first char of next word
 */

char *get_next_word(char *str, char *delims)
{
	int pending = 0;
	int i = 0;

	while (*(str + i))
	{
		if (is_delim(str[i], delims))
			pending = 1;
		else if (pending)
			break;
		i++;
	}
	return (str + i);
}
