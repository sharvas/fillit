
#include "fillit.h"

void		ft_error(void)
{
	ft_putstr("error\n");
	exit(1);
}

static char	*classify_tetro(char *sq)
{
	if (read_i(sq))
		return ()
	ft_error();
}

char		**assign_array(char *file)
{
	char	**tetro_array;
	char	*sq;
	int		i;
	int		end;

	i = 0;
	end = 0;
	if (!file || !(tetro_array = (char **)malloc(sizeof(char *) * 27)))
		ft_error();
	while (!end && i < 27)
	{
		if (!(sq = ft_strndup(file, 20)))
			ft_error();
		if (file[20] != '\n')
			end = 1;
		else
			file += 21;
		if ((end && file[20] != '\0'))
			ft_error();
		tetro_array[i++] = ft_strdup(classify_tetro(sq));
		if (sq)
			free(sq);
	}
	tetro_array[i] = NULL;
	return (tetro_array);
}

static char		*read_file(char **argv)
{
	int		fd;
	char	*ret;
	char	buf[548];
	int		read_ret;

	if ((fd = open(argv[1], O_RDONLY)) < 0)
		ft_error();
	if ((read_ret = read(fd, buf, 547)) < 0)
		ft_error();
	ret = ft_strndup((char *)buf, read_ret);
	close(fd);
	return (ret);
}
