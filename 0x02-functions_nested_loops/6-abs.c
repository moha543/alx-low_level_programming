#include "main.h"

/**
 * _abs - Computes the absolute value of integer
 * @a: Thr integer to be computed
 * Return: Absolute value
 */

int _abs(int a)
{
	if (a >= 0)
		return (a);
	else
		return (a * -1);
}
