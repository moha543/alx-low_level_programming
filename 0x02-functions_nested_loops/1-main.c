#include <stdio.h>
#include "main.h"

/**
 * main - Entry poiny
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');

	return (0);
