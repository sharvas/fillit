/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_revl.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfinnis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 12:05:41 by dfinnis           #+#    #+#             */
/*   Updated: 2018/11/21 12:05:43 by dfinnis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		read_l5(char *sq)
{
	if (ft_strcmp(sq, ".#..\n.#..\n##..\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n.#..\n.#..\n##..\n") == 0)
		return (1);
	if (ft_strcmp(sq, "..#.\n..#.\n.##.\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n..#.\n..#.\n.##.\n") == 0)
		return (1);
	if (ft_strcmp(sq, "...#\n...#\n..##\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n...#\n...#\n..##\n") == 0)
		return (1);
	return (0);
}

int		read_l6(char *sq)
{
	if (ft_strcmp(sq, "#...\n###.\n....\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n#...\n###.\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n....\n#...\n###.\n") == 0)
		return (1);
	if (ft_strcmp(sq, ".#..\n.###\n....\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n.#..\n.###\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n....\n.#..\n.###\n") == 0)
		return (1);
	return (0);
}

int		read_l7(char *sq)
{
	if (ft_strcmp(sq, "##..\n#...\n#...\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n##..\n#...\n#...\n") == 0)
		return (1);
	if (ft_strcmp(sq, ".##.\n.#..\n.#..\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n.##.\n.#..\n.#..\n") == 0)
		return (1);
	if (ft_strcmp(sq, "..##\n..#.\n..#.\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n..##\n..#.\n..#.\n") == 0)
		return (1);
	return (0);
}

int		read_l8(char *sq)
{
	if (ft_strcmp(sq, "###.\n..#.\n....\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n###.\n..#.\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n....\n###.\n..#.\n") == 0)
		return (1);
	if (ft_strcmp(sq, ".###\n...#\n....\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n.###\n...#\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n....\n.###\n...#\n") == 0)
		return (1);
	return (0);
}
