#include "main.h"
#include <stdio.h>

/**
 * string_toupper - changes all lowercase to uppercase
 * @word: pointer to string
 * Return: Pointer to uppercase string
 */

char *string_toupper(char *word)
{
	int l = 0;

	while (word[l] != '\0')
	{
		if (word[l] >= 97 && word[l] <= 122)
		{
			word[l] = word[l] - 32;
		}
		l++;
	}
	return (word);
}
