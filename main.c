/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfinnis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 08:39:35 by dfinnis           #+#    #+#             */
/*   Updated: 2018/12/01 19:53:49 by svaskeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main(int argc, char **argv)
{
	char	**tetro_array;
	int		**pieces;
	int		fd;
	char	*tmp;
	char	buf[548];
	int		read_ret;

	fd = 0;
	if (argc != 2)
		ft_exit_usage();
	if ((fd = open(argv[1], O_RDONLY)) == -1)
		ft_error();
	if ((read_ret = read(fd, buf, 547)) < 0)
		ft_error();
	tetro_array = ft_assign_array(tmp = ft_strndup((char *)buf, read_ret));
	close(fd);
	free(tmp);
	pieces = ft_convert(tetro_array);
	ft_print_array(tetro_array = ft_start_function(pieces));
	ft_2d_int_free(pieces);
	ft_2d_char_free(tetro_array);
	return (0);
}
