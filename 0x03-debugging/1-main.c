#include <stdio.h>

/**
 * main - causes infinite loop
 * Return: 0
 */

int main(void)
{
int i;

printf("Infinite loop incoming :(\n");

i = 0;
/*
 * whlie (i < 10)
 * {
 * putchar(i);
 * }
 */
printf("Infinite loop avoided! \\o/\n");

return (0);
}
