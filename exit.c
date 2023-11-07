#include "shell.h"

/**
 **_strncpy - To copy a string
 *@dest: the destination of the string to be copied
 *@src: the origin of string
 *@n: the volume of characters to be copied
 *Return: return the linked string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a, d;
	char *s = dest;

	a = 0;
	while (src[a] != '\0' && a < n - 1)
	{
		dest[a] = src[a];
		a++;
	}
	if (a < n)
	{
		d = a;
		while (d < n)
		{
			dest[d] = '\0';
			d++;
		}
	}
	return (s);
}

/**
 **_strncat - link the two strings
 *@dest: this the first string
 *@src:  this the second string
 *@n: the volume of bytes to be used
 *Return:  return the linked string
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, d;
	char *s = dest;

	a = 0;
	d = 0;
	while (dest[a] != '\0')
		a++;
	while (src[d] != '\0' && d < n)
	{
		dest[a] = src[d];
		a++;
		d++;
	}
	if (d < n)
		dest[a] = '\0';
	return (s);
}

/**
 **_strchr - locate the character in the string
 *@s: the string to be pointed out
 *@c: the character to find
 *Return: return (s) a pointer to the memory area s
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++ != '\0');

	return (NULL);
}
