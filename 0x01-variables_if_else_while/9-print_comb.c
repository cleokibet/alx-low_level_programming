#include <stdio.h>
/**
* main - Prints all combination of single digit
* Return: Always 0 (success)
*/
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
	{
		putchar(',');
		putchar(' ');
	}
	}
	return (0);
}
