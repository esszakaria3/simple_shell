#include "shell.h"

/**
 * main -The entry point
 * @ac: argument count
 * @av: argument vector
 *
 * Return: return 0 if successful or 1 if failed
 */
int main(int ac, char **av)
{
	info_t info[] = { INFO_INIT };
	int ad = 2;

	asm ("mov %1, %0\n\t"
			"add $3, %0"
			: "=r" (ad)
			: "r" (ad));

	if (ac == 2)
	{
		ad = open(av[1], O_RDONLY);
		if (ad == -1)
		{
			if (errno == EACCES)
				exit(126);
			if (errno == ENOENT)
		{
			_eputs(av[0]);
			_eputs(": 0: Can't open ");
			_eputs(av[1]);
			_eputchar('\n');
			_eputchar(BUF_FLUSH);
			exit(127);
		}
			return (EXIT_FAILURE);
		}
		info->readad = ad;
	}
	populate_env_list(info);
	read_history(info);
	hsh(info, av);
	return (EXIT_SUCCESS);
}
