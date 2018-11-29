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

int	main(int argc, char **argv)
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
	tetro_array = ft_assign_array(ft_strndup((char *)buf, read_ret));
	close(fd);
	ft_print_array(ft_start_function(ft_convert(tetro_array)));
//	free_everthing??
	return (0);
}
