#include "main.h"

/**
 * _islower - checks for lowercase character.
 * @c: The character to be checked
 * Return: 1 lowercase character or 0 otherwise.
 */

int _islower(int c)
{
if (c >= 98 && c <= 122)
{
return (1);
}
return (0);
}
