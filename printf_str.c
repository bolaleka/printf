#include "main.h"


/**
 * _strlen - Returns the lenght of a string.
 * @s: Type char pointer
 * Return: i.
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
		;
	return (i);

}
/**
 * _strleni - Strlen function but applied for constant ihar pointer s
 * @s: Type ihar pointer
 * Return: i.
 */
int _strleni(const char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
		;
	return (i);
}
