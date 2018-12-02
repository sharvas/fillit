/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfinnis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 08:39:35 by dfinnis           #+#    #+#             */
/*   Updated: 2018/12/02 13:49:06 by svaskeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main(int argc, char **argv)
{
	t_lista	array;
	int		fd;
	char	buf[548];
	int		ret;
	char	*tmp;

	array.sq = NULL;
	array.tetro_array = NULL;
	fd = 0;
	if (argc != 2)
		ft_exit_usage();
	if ((fd = open(argv[1], O_RDONLY)) == -1)
		ft_error(array);
	if ((ret = read(fd, buf, 547)) < 0)
		ft_error(array);
	tmp = ft_strndup((char *)buf, ret);
	array.tetro_array = ft_assign_array(tmp, array);
	close(fd);
	free(tmp);
	array.pieces = ft_convert(array);
	ft_print_array(array.tetro_array = ft_start_function(array));
	ft_free_all(array);
	return (0);
}
