#include "main.h"
#include <stdio.h>
/**
* main - Entry point
* _putchar: for character
* _p_ts: place holder
* @str: string character
* Return: Always 0 (Success)
*/

void _puts(char *str)
{
int i = 0;

while (str[i])
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
