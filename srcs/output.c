/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfinnis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 12:33:05 by dfinnis           #+#    #+#             */
/*   Updated: 2018/12/02 12:01:52 by svaskeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_exit_usage(void)
{
	ft_putstr("usage:	./fillit source_file\n");
	exit(1);
}

void	ft_free_all(t_lista array)
{
	if (array.pieces)
		ft_2d_int_free(array.pieces);
	if (array.tetro_array)
		ft_2d_char_free(array.tetro_array);
	if (array.space)
		ft_2d_char_free(array.space);
	if (array.sq)
		free(array.sq);
}

void	ft_error(t_lista array)
{
	ft_putstr("error\n");
	ft_free_all(array);
	exit(1);
}

void	ft_print_array(char **array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		ft_putstr(array[i++]);
		ft_putstr("\n");
	}
}
