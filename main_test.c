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

void	print_array(char **tetro_array)//
{//
	int	i;//
	int	j;//

	i = 0;//
	j = 0;//
	printf("here?");//
	while (tetro_array[i])//
		printf("%s\n", tetro_array[i++]);//
}//

int		main(int argc, char **argv)
{
	char	*file;
	char	**tetro_array;
	int		fd;
	char	buf[548];
	int		read_ret;

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
	print_array(tetro_array);//
//	algorithm(tetro_array);//
//	free_file//
	return (0);
}
