#include "main.h"

/**
 * _strlen_recursion - return the length of a string.
 * @s: string
 * Return: the lenght of a string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * comparator - compares each character of the string
 * @s; string
 * @n1: smallest iterator
 * @n2: biggest iterator
 * Return: anything.
 */
