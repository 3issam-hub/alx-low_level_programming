#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times in lowercase
 *
 * This function prints the alphabet in lowercase 10 times.
 */

void print_alphabet_x10(void)
{
int c = 1, i;
while (c <= 10)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
c++;
}
}
