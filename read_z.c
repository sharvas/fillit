/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_z.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfinnis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 10:39:26 by dfinnis           #+#    #+#             */
/*   Updated: 2018/11/21 10:39:31 by dfinnis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_read_z1(char *sq)
{
	if (ft_strcmp(sq, "##..\n.##.\n....\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n##..\n.##.\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n....\n##..\n.##.\n") == 0)
		return (1);
	if (ft_strcmp(sq, ".##.\n..##\n....\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n.##.\n..##\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n....\n.##.\n..##\n") == 0)
		return (1);
	return (0);
}

int		ft_read_z2(char *sq)
{
	if (ft_strcmp(sq, ".#..\n##..\n#...\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n.#..\n##..\n#...\n") == 0)
		return (1);
	if (ft_strcmp(sq, "..#.\n.##.\n.#..\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n..#.\n.##.\n.#..\n") == 0)
		return (1);
	if (ft_strcmp(sq, "...#\n..##\n..#.\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n...#\n..##\n..#.\n") == 0)
		return (1);
	return (0);
}

int		ft_read_z3(char *sq)
{
	if (ft_strcmp(sq, ".##.\n##..\n....\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n.##.\n##..\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n....\n.##.\n##..\n") == 0)
		return (1);
	if (ft_strcmp(sq, "..##\n.##.\n....\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n..##\n.##.\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n....\n..##\n.##.\n") == 0)
		return (1);
	return (0);
}

int		ft_read_z4(char *sq)
{
	if (ft_strcmp(sq, "#...\n##..\n.#..\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n#...\n##..\n.#..\n") == 0)
		return (1);
	if (ft_strcmp(sq, ".#..\n.##.\n..#.\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n.#..\n.##.\n..#.\n") == 0)
		return (1);
	if (ft_strcmp(sq, "..#.\n..##\n...#\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n..#.\n..##\n...#\n") == 0)
		return (1);
	return (0);
}

char	*ft_read_z(char *sq)
{
	if (ft_read_z1(sq))
		return ("##.\n.##\n");
	if (ft_read_z2(sq))
		return (".#\n##\n#.\n");
	if (ft_read_z3(sq))
		return (".##\n##.\n");
	if (ft_read_z4(sq))
		return ("#.\n##\n.#\n");
	return (NULL);
}
