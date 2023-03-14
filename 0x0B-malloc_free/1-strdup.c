#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: points to the copied string (success), null (error)
 */

char *_strdup(char *str)
{
	char *duplicate;
	unsigned int i, len;

	i = 0;
	len = 0;
	if (str == NULL)
	return (NULL);
	while (str[len])
		duplicate = malloc(sizeof(char) * (len + 1));
	if (duplicate == NULL)
		return (NULL);
	while ((duplicate[i] = str[i]) != '\0')
		i++;
	return (duplicate);
}
