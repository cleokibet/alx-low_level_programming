#include <stdio.h>
/**
* main - Prints alphabet in lowercase
* followed by a new line except qand e
* Return: Always 0 (success)
*/
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && la != 'q')
		putchar(la);
	}
	putchar('\n');

	return (0);
}
