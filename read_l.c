/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_l.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfinnis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 11:44:21 by dfinnis           #+#    #+#             */
/*   Updated: 2018/11/21 11:44:32 by dfinnis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		read_l1(char *sq)
{
	if (ft_strcmp(sq, "#...\n#...\n##..\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n#...\n#...\n##..\n") == 0)
		return (1);
	if (ft_strcmp(sq, ".#..\n.#..\n.##.\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n.#..\n.#..\n.##.\n") == 0)
		return (1);
	if (ft_strcmp(sq, "..#.\n..#.\n..##\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n..#.\n..#.\n..##\n") == 0)
		return (1);
	return (0);
}

int		read_l2(char *sq)
{
	if (ft_strcmp(sq, "###.\n#...\n....\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n###.\n#...\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n....\n###.\n#...\n") == 0)
		return (1);
	if (ft_strcmp(sq, ".###\n.#..\n....\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n.###\n.#..\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n....\n.###\n.#..\n") == 0)
		return (1);
	return (0);
}

int		read_l3(char *sq)
{
	if (ft_strcmp(sq, "##..\n.#..\n.#..\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n##..\n.#..\n.#..\n") == 0)
		return (1);
	if (ft_strcmp(sq, ".##.\n..#.\n..#.\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n.##.\n..#.\n..#.\n") == 0)
		return (1);
	if (ft_strcmp(sq, "..##\n...#\n...#\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n..##\n...#\n...#\n") == 0)
		return (1);
	return (0);
}

int		read_l4(char *sq)
{
	if (ft_strcmp(sq, "..#.\n###.\n....\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n..#.\n###.\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n....\n..#.\n###.\n") == 0)
		return (1);
	if (ft_strcmp(sq, "...#\n.###\n....\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n...#\n.###\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n....\n...#\n.###\n") == 0)
		return (1);
	return (0);
}
