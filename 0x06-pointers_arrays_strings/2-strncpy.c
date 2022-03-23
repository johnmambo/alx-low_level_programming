#include "main.h"
/**
* *_strncpy - copy a string to another
* @dest: pointer destination
* @src: pointer source
* @n: number of bytes
* Return: void
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for (i = 0; i < n i++)
dest[i] = '\0';
return (dest);
}
