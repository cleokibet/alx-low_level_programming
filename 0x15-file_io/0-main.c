#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>

/**
* main - check the code
* @ac: parameter
* @av: parametrs
* Return: Always 0.
*/
int main(int ac, char **av)
{

if (ac != 2)
{
dprintf(2, "Usage: %s filename\n", av[0]);
exit(1);
}
return (0);
}
