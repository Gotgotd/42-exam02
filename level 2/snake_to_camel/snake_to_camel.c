#include <unistd.h>

int	main(int ac, char **av)
{
	int	i = 0;

	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] != '_')
				write(1, &av[1][i], 1);
			if (av[1][i] == '_')
				av[1][i + 1] -= 32;
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}