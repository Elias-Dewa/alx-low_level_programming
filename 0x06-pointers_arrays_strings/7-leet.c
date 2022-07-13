#include "main.h"

/**
 * leet - encodes a string in to 1337
 * @s: input pointer string
 *
 * Return: strings
 */
char *leet(char *s)
{
	int i = 0, j = 0;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	while (s[i] != '\0')
	{
		while (j < 10)
		{
			if (s[i] == letters[j])
				s[i] = numbers[j];
			j++;
		}
		i++;
	}
	return (s);
}
