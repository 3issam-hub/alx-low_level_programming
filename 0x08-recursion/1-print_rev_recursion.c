#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _print_rev_recursion(char *s)
{
<<<<<<< HEAD
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
=======
if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
_putchar(*s);
>>>>>>> abe51c09961c5f99583d25f1d7b3d5228f53b5ad
}
