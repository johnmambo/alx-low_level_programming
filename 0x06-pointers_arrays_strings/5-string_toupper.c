#include "main.h"
/**
 * *string_toupper - changes all lowercase letters of a string to upper.
 *
 * :
 * Return: string.
 */
char *string_toupper(char *)
{
	int i;
	char str;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}

