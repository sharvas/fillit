#include "fillit.h"

int	main(int argc, char **argv)
{
	char	**array;

	if (!(array = (char**)malloc(sizeof(char) * 26)))
		return (NULL);
	
}

// int	main(int argc, char **argv)
// {
//	if (argc != 2)
//		write(1, "usage:	source_file\n", 19);
//	else
//	{
//		read_tets(argv[1]);
//		assemble_tets();
//		print_tets();
// 	}
// 	return (0);
// }
