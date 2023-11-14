#include "shell.h"

/**
* print_env - prints the environment string to the
* standard output.
*
* Return: 0
*/

void print_env(void)
{
	int m = 0;
	char **env = environ;

	while (env[m])
	{
		write(STDOUT_FILENO, (const void *)env[m], _strlen(env[m]));
		write(STDOUT_FILENO, "\n", 1);
		m++;
	}
}
