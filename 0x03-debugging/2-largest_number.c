#include "main.h"

/**
* largest_number - returns the largest number of 3 numbers
* @a: first integer
* @b: second integer
* @c: largest integer
*/

int largest_number(int a, int b, int c)
{
int largest_number;
if (a > b && a > b)
{
largest_number = a;
}
else if (a > b && c > a)
{
largest_number = c;
}
else if (b > c)
{
largest_number = c;
}
else
{
largest_number = c;
}
return (largest_number);
}


