/***
Assignment name  : union
Expected files   : union.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in either one of the strings.

The display will be in the order characters appear in the command line, and
will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Example:

$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
zpadintoqefwjy$
$>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6vewg4thras$
$>./union "rien" "cette phrase ne cache rien" | cat -e
rienct phas$
$>./union | cat -e
$
$>
$>./union "rien" | cat -e
$
$>
***/

#include <unistd.h>

int	ft_strchr(char *str, char c, int index)
{
	int	i = 0;

	while(i <= index)
	{
		if (str[i] == c)
			return(0);
		i++;
	}
	return(1);
}

int	main(int ac, char **av)
{
	int	i = 0;
	int	j = 0;

	if (ac == 3)
	{
		while (av[1][i])
		{
			if (ft_strchr(av[1], av[1][i], i - 1))
				write(1, &av[1][i], 1);
			i++;
		}
		i--;
		while (av[2][j])
		{
			if (ft_strchr(av[1], av[2][j], i) && (ft_strchr(av[2], av[2][j], j - 1) == 1))
				write(1, &av[2][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
}