#include "shell.h"

/**
* free_buffers - free the buffers
* @buf: buffer to be freed
*
* Return: no return
*/

void free_buffers(char **buf)
{
	int b = 0;

	if (!buf || buf == NULL)
		return;
	while (buf[b])
	{
		free(buf[b]);
		b++;
	}
	free(buf);
}
