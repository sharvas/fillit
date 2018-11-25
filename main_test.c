#include "fillit.h"

int		main(int argc, char **argv)
{
	char	*file;
	char	*tetro_array;

	if (argc != 2)
		ft_putstr("usage:	./fillit source_file\n");
		exit(1);
	if (!(file = read_file(argv)))
		ft_error();
	tetro_array = assign_array(file);
//	algorithm(tets_array);//
//	free_file//
	return (0);
}
