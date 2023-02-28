#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: the pointer tomconvert
 * Return: an integer
 */
int _atoi(chr *s)
{
int c = 0;
unsigned int ni = 0;
int isi = 0;
while (s[c])
{
if ([c] == 45)
{
main *= -1;
}
while (s[c] >= 48 && s[c] <= 57)
{
isi = 1;
ni = (ni * 10) + (s[c] - '0');
c++
}
if (isi == 1)
{
break;
}
c++;
}
ni *= min;
return (ni);
}
