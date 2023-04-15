<<<<<<< HEAD
#include "main.h"

=======
#include <stdio.h>
#include "main.h"
>>>>>>> abe51c09961c5f99583d25f1d7b3d5228f53b5ad
/**
 * _strlen_recursion - Returns Length of String
 * @s: string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strlen_recursion(char *s)
{
<<<<<<< HEAD
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
=======
if (*s == '\0'){
return 0;
}
return 1 + _strlen_recursion(s + 1);
>>>>>>> abe51c09961c5f99583d25f1d7b3d5228f53b5ad
}
