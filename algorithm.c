/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaskeli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 14:22:46 by svaskeli          #+#    #+#             */
/*   Updated: 2018/12/01 19:44:45 by svaskeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_new_space(int min_size)
{
	int		y;
	int		x;
	char	**space;

	y = 0;
	if (!(space = (char**)malloc(sizeof(char*) * min_size + 1)))
		ft_error();
	while (y < min_size)
	{
		x = 0;
		if (!(space[y] = ft_strnew(min_size)))
			ft_error();
		while (x < min_size)
			space[y][x++] = '.';
		y++;
	}
	space[y] = NULL;
	return (space);
}

int		ft_recursive_solver(char **space, int **pieces, int min_size)
{
	int x;
	int y;
	int i;

	y = -1;
	i = 0;
	if (pieces[i] == NULL)
		return (1);
	while (space[++y] != NULL)
	{
		x = -1;
		while (space[y][++x] != '\0')
		{
			if (ft_in_space(pieces[i], x, y, min_size) &&
				ft_issafe(space, pieces[i], x, y))
			{
				ft_update_space(space, pieces[i], x, y);
				if (ft_recursive_solver(space, &pieces[i + 1], min_size))
					return (1);
				else
					ft_backtrack(space, pieces[i], x, y);
			}
		}
	}
	return (0);
}

char	**ft_start_function(int **pieces)
{
	char	**space;
	int		res;
	int		min_size;
	int		i;

	min_size = ft_sqrt(ft_listlen_int(pieces) * 4);
	space = ft_new_space(min_size);
	while ((res = ft_recursive_solver(space, pieces, min_size)) != 1)
	{
		i = -1;
		while (space[++i] != NULL)
			free(space[i]);
		free(space);
		if (!(space = ft_new_space(++min_size)))
			ft_error();
	}
	return (space);
}
