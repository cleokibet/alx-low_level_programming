#include <unistd.h>

/**
 * _putchar - write character c to stdout
 * @c: char to be printed
 * Return: on success
 */
int _putcha(char c)
{
	return (write(1, &c, 1));
}
