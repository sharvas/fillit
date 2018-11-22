#include "fillit.h"

// char 	**assign_array(char *str)
// {
// 	char	**array;

// 	if (!(array = (char**)malloc(sizeof(char) * 26)))
// 		return (NULL);
// 	if (read_i1(str))
// 		array[0] = "i1";
// 		return (array);
// 	if (read)
// }

char	*sq_split(char *str)
{
	int		sq_count;
	char	*sq;

	sq_count = 0;
	while (str[sq_count * 21])
	{
		sq = ft_strsub(str, (sq_count++ * 21), 20);
	}
	return (sq);
}

#include <stdio.h>//

int		main(int argc, char **argv)
{
	char	*sq;

	if (argc != 2)
		write(1, "usage:	source_file\n", 19);
	else
	{
		sq = sq_split(argv[1]);
		printf("%s\n", sq);
	}
	return (0);
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
