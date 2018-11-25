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

int		read_j1(char *sq)
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

int		read_j2(char *sq)
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

int		read_j3(char *sq)
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

int		read_j4(char *sq)
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
