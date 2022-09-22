#include "main.h"
#include <string.h>
/**
 * _strcat - concatenates two string
 *
 * @dest: destination string; src string is appended to it
 * @src: source string; gets appended to dest string
 * Return: Pointer to dest 
 */

char *_strcat(char *dest, char *src)
{
	

	while (*dest != '\n')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
