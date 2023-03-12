#include "main.h"
#include <stdio.h>

/**
 * main - print the number of args
 * @argc: Argument count
 * @argv: argument vector
 *
 * Return: Always zero
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
