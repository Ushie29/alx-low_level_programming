#include "main.h"
/**
 * _strlen - function that gives the length of a strings
 * @s: the atrings pass as char
 *
 * Return: the length of a  string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
		;
	return (i);
}
