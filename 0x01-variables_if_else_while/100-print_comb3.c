#include <stdio.h>
/**
* main - prints all possible different combinations of two digits.
* return: Always 0
 */

int main(void)
{
	int s = 0, e = 1, s1 = 1, e1 = 2;

	while (s <= e)
	{
	s1 = s + 1;
	while (s1 <= e1)
		{
		putchar(s + '0');
		putchar(s1 + '0');
		if (s != e)
			{
			putchar(',');
			putchar(' ');
			}
			s1++;
		}
		s++;
	}
	putchar('\n');

	return (0);
}
