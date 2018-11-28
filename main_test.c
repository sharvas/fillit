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

void	print_array(char **tetro_array)
{
	int	i;

	i = 0;
	while (tetro_array[i])
	{
		ft_putstr(tetro_array[i++]);
		ft_putstr("\n");
	}
}

int		ft_listlen_char(char **array)
{
	int i;

	i = 0;
	while (array[i] != NULL)
		i++;
	return (i);
}

// int	**ft_convert_slave(char **array, **pieces)
// {
// 	int x;
// 	int y;
// 	int j;
// 	int k;

// 	x = 0;
// 	y = 0;
// 	j = 0;
// 	k = 0;
// 	if (!(pieces[n] = (int*)malloc(sizeof(int) * 9)))
// 		return (NULL);
// 	while (array[n][j] != '\0')
// 	{
// 		if (array[n][j] == '#')
// 		{
// 			pieces[n][k++] = y;
// 			pieces[n][k++] = x;
// 		}
// 		if (array[n][j] == '\n')
// 		{
// 			y++;
// 			x = 0;
// 		}
// 		else
// 			x++;
// 		j++;
// 	}
// }

int	**ft_convert(char **array)
{
	int **pieces;
	int i;
	int n;
	int x;
 	int y;
 	int j;
 	int k;
	
	n = 0;
	i = ft_listlen_char(array);
	if (!(pieces = (int**)malloc(sizeof(int*) * i + 1)))
		return (NULL);
	while (n < i)
	{
		y = 0;
		x = 0;
		k = 0;
		j = 0;
		if (!(pieces[n] = (int*)malloc(sizeof(int) * 9)))
			return (NULL);
		while (array[n][j] != '\0')
		{
			if (array[n][j] == '#')
			{
				pieces[n][k++] = y;
				pieces[n][k++] = x;
			}
			if (array[n][j] == '\n')
			{
				y++;
				x = 0;
			}
			else
				x++;
			j++;
		}
		pieces[n][k] = n;
//		ft_convert_slave(**array, **pieces);
		n++;
	}
	pieces[n] = NULL;
	return (pieces);
}

void	ft_exit_usage(void)
{
	ft_putstr("usage:	./fillit source_file\n");
	exit(1);
}

int		main(int argc, char **argv)
{
	char	**tetro_array;
	int		fd;
	char	buf[548];
	int		read_ret;

	fd = 0;
	if (argc != 2)
		ft_exit_usage();
	if ((fd = open(argv[1], O_RDONLY)) == -1)
		ft_error();
	if ((read_ret = read(fd, buf, 547)) < 0)
		ft_error();
	tetro_array = assign_array(ft_strndup((char *)buf, read_ret));
	close(fd);
	print_array(start_function(ft_convert(tetro_array)));
//	free_everthing??
	return (0);
}
