#include "shell.h"

/**
* test_path - checks whether path is valid
* @path: tokenized path
* @command: the user command
*
* Return: return success if appended with cmd or null if not.
*/

char *test_path(char **path, char *command)
{
	int j = 0;
	char *output;

	while (path[j])
	{
		output = append_path(path[j], command);
		if (access(output, F_OK | X_OK) == 0)
			return (output);
		free(output);
		j++;
	}
	return (NULL);
}
