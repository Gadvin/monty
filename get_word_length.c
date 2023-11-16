#include "monty.h"

/**
 * get_word_length - function that gets the word length
 *
 * @str: string to get word length from
 * @delims: delimitors
 *
 * Return: word length of current word
 */

int get_word_length(char *str, char *delims)
{
	int wLen = 0, pending = 1, i = 0;

	while (*(str + i))
	{
		if (is_delim(str[i], delims))
			pending = 1;
		else if (pending)
		{
			wLen++;
		}
		if (wLen > 0 && is_delim(str[i], delims))
			break;
		i++;
	}
	return (wLen);
}
