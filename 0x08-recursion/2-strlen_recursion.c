#include "main.h"
/**
 * _strlen_recursion - eturns the length of a string
 * @s: this is the string
 * Return: will return the length
 */
int _strlen_recursion(char *s)
{
int i = 0;
if (*s)
{
i++;
i += _strlen_recursion(s + 1);
}
return (i);
}
