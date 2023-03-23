#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 **/
int main(void)
{
int i, j = 1, n = 1;
for (i = 0 ; i < 10; i++)
{
j = n;
while (j < 10)
{
if (i != j && i < j)
{
putchar(i + '0');
putchar(j + '0');
if (i != 8 || j != 9)
{
putchar(',');
putchar(' ');
}
}
j++;
}
n++;
}
putchar('\n');
return (0);
}
