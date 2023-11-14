#include "shell.h"

/**
* find_path - finds the path from the general enviroment
*
* Return: 0 if path not found or path if otherwise
*/

char *find_path(void)
{
	int i;
	char **env = environ, *path = NULL;

	while (*env)
	{
		if (_strncmp(*env, "PATH=", 5) == 0)
		{
			path = *env;
			while (*path && i < 5)
			{
				path++;
				i++;
			}
			return (path);
		}
		env++;
	}
	return (NULL);
}
