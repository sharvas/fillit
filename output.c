//header//

#include "fillit.h"

void	ft_exit_usage(void)
{
	ft_putstr("usage:	./fillit source_file\n");
	exit(1);
}

void	ft_error(void)
{
	ft_putstr("error\n");
	exit(1);
}

void	ft_print_array(char **array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		ft_putstr(array[i++]);
		ft_putstr("\n");
	}
}
