#include "main.h"

/**
* _strcat - concatenates the string pointed to bt @src to
* the end of the string pointed by @dest
* @dest: String that will be appended 
* @src: String to be concatenated
*
* Return: returns to pointer to @dest
*/

char *_strcat(char *dest, char *src)
{

     int index = 0, dest_len = 0;

     while (dest[index++])
                dest_len++;
     for (index = 0; src[index]; index++)
               dest[dest_len++] = src[index];
      
     return (dest);
