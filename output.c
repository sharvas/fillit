/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfinnis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 12:33:05 by dfinnis           #+#    #+#             */
/*   Updated: 2018/12/01 12:33:16 by dfinnis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_exit_usage(void)
{
	ft_putstr("usage:	./fillit source_file\n");
	exit(1);
}

void	ft_error(void) //error function needs to free both int and char array if they are malloced
{
	ft_putstr("error\n");
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
