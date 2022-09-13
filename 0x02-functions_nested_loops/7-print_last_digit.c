#include "main.h"

/**
 * print_last_digit - Prints last digit of a number
 *
 * @n: A number
 *
 * Return: Last digit of n
 */

int print_last_digit(int) 
{
	int last_digit;

	if (last_digit < 0 )
		last_digit = (last_digit % 10) * -1;
	else 
		last_digit = last_digit % 10;
	
	_putchar(last_digit + '0');

	return (last_digit);
}
