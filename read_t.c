/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_t.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfinnis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 11:30:43 by dfinnis           #+#    #+#             */
/*   Updated: 2018/11/21 11:30:45 by dfinnis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_read_t1(char *sq)
{
	if (ft_strcmp(sq, "###.\n.#..\n....\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n###.\n.#..\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n....\n###.\n.#..\n") == 0)
		return (1);
	if (ft_strcmp(sq, ".###\n..#.\n....\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n.###\n..#.\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n....\n.###\n..#.\n") == 0)
		return (1);
	return (0);
}

int		ft_read_t2(char *sq)
{
	if (ft_strcmp(sq, ".#..\n##..\n.#..\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n.#..\n##..\n.#..\n") == 0)
		return (1);
	if (ft_strcmp(sq, "..#.\n.##.\n..#.\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n..#.\n.##.\n..#.\n") == 0)
		return (1);
	if (ft_strcmp(sq, "...#\n..##\n...#\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n...#\n..##\n...#\n") == 0)
		return (1);
	return (0);
}

int		ft_read_t3(char *sq)
{
	if (ft_strcmp(sq, ".#..\n###.\n....\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n.#..\n###.\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n....\n.#..\n###.\n") == 0)
		return (1);
	if (ft_strcmp(sq, "..#.\n.###\n....\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n..#.\n.###\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n....\n..#.\n.###\n") == 0)
		return (1);
	return (0);
}

int		ft_read_t4(char *sq)
{
	if (ft_strcmp(sq, "#...\n##..\n#...\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n#...\n##..\n#...\n") == 0)
		return (1);
	if (ft_strcmp(sq, ".#..\n.##.\n.#..\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n.#..\n.##.\n.#..\n") == 0)
		return (1);
	if (ft_strcmp(sq, "..#.\n..##\n..#.\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n..#.\n..##\n..#.\n") == 0)
		return (1);
	return (0);
}

char	*ft_read_t(char *sq)
{
	if (ft_read_t1(sq))
		return ("###\n.#.\n");
	if (ft_read_t2(sq))
		return (".#\n##\n.#\n");
	if (ft_read_t3(sq))
		return (".#.\n###\n");
	if (ft_read_t4(sq))
		return ("#.\n##\n#.\n");
	return (NULL);
}
