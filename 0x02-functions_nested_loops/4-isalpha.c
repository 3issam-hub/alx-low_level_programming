#include "main.h"

/**
 * _isalpha - checks for lowercase character.
 * @c: The character to be checked
 * Return: 1 lowercase character or 0 otherwise.
 */

int _isalpha(int c)
{
if ((c >= 98 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
return (0);
}
