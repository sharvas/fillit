/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_i.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfinnis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 10:33:49 by dfinnis           #+#    #+#             */
/*   Updated: 2018/11/21 10:33:57 by dfinnis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_read_i1(char *sq)
{
	if (ft_strcmp(sq, "#...\n#...\n#...\n#...\n") == 0)
		return (1);
	if (ft_strcmp(sq, ".#..\n.#..\n.#..\n.#..\n") == 0)
		return (1);
	if (ft_strcmp(sq, "..#.\n..#.\n..#.\n..#.\n") == 0)
		return (1);
	if (ft_strcmp(sq, "...#\n...#\n...#\n...#\n") == 0)
		return (1);
	return (0);
}

int		ft_read_i2(char *sq)
{
	if (ft_strcmp(sq, "####\n....\n....\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n####\n....\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n....\n####\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n....\n....\n####\n") == 0)
		return (1);
	return (0);
}

char	*ft_read_i(char *sq)
{
	if (ft_read_i1(sq))
		return ("#\n#\n#\n#\n");
	if (ft_read_i2(sq))
		return ("####\n");
	return (NULL);
}
