/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfinnis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 08:39:35 by dfinnis           #+#    #+#             */
/*   Updated: 2018/11/26 08:39:37 by dfinnis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**start_function(int **pieces);

void	print_array(char **tetro_array)//
{//
	int	i;//
	int	j;//

	i = 0;//
	j = 0;//
	while (tetro_array[i])//
		printf("%s\n", tetro_array[i++]);//
}//

int	**ft_convert(char **array)
{
	int **pieces;
	int i;
	int n;
	int x;
	int y;
	int j;

	i = 0;
	while (array[i] != NULL)
		i++;
	if (!(pieces = (int**)malloc(sizeof(int*) * i + 1)))
		return (NULL);
	while (n < i)
	{
		y = 0;
		x = 0;
		k = 0;
		n = 0;
		j = 0;
		if (!(pieces[n] = (int*)malloc(sizeof(int) * 9)))
			return (NULL);
		while (array[n][j] != '\0')
		{
			if (array[n][j] == '#')
			{
				pieces[n][k] = y;
				pieces[n][++k] = x;
				k++;
			}
			if (array[n][j] == '\n')
				y++;
			j++;
			x++;
		}
		pieces[n][k] = i;
		n++;
	}
	pieces[n] = NULL;
	return (pieces);
}

int		main(int argc, char **argv)
{
	char	*file;
	char	**tetro_array;
	int		fd;
	char	buf[548];
	int		read_ret;
	char **space;
	int **pieces;

	file = NULL;
	fd = 0;
	if (argc != 2)
	{
		ft_putstr("usage:	./fillit source_file\n");
		exit(1);
	}
	if ((fd = open(argv[1], O_RDONLY)) == -1)
		ft_error();
	if ((read_ret = read(fd, buf, 547)) < 0)
		ft_error();
	file = ft_strndup((char *)buf, read_ret);
	close(fd);
	tetro_array = assign_array(file);
	print_array(tetro_array);
	pieces = ft_convert(tetro_array);
	space = start_function(tetro_array);
	printf_array(space);
//	free_file
	return (0);
}
