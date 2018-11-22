/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaskeli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 14:22:46 by svaskeli          #+#    #+#             */
/*   Updated: 2018/11/22 11:52:48 by svaskeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fillit.h>

int		**ft_convert_to_coord(char piece)
{
	int coord[4][4];
	int i;

	if (piece == A to D)
		coord -> xx, xx, xx, xx;
	if (piece == D to K)
		coord -> xx, xx, xx, xx;
	...
	return (coord);
}

int		ft_issafe(char **space, char **piece, int x, int y)
{
	return (0); //cannot place;
	return (1); //can place;
}

int		ft_update_space(char **space, char **piece, int x, int y)
{
	return (0); //failed to update
	return (1); //updated
}

int		ft_remove_piece(char *pcs_left, char)

int		ft_recursive_solver(char **space, char *pcs_left)
{
	int x;
	int y;

	x = 0;
	y = 0;
	if (ft_strlen(pcs_left) == 0)
		return (1);
	while (ft_strlen(pcs_left) != 0)
	{
		while (space[x] != '\0')
		{
			while (space[y] != '\0')
			{
				if (space[y][x] == 0 && ft_issafe(sapce, piece, x, y))
				{
					ft_update_space(space, piece, x, y);
					ft_remove_piece(pcs_left, piece);
					ft_recursive_solver(space, pcs_left);
				}
				else

			}
		}
	}
}

int		**ft_new_space(int min_size)
{
	min_size = ft_strlen(pcs_left)*2;
	**space = space[min_size][min_size];
}

char	**main_fill(char *pcs_left)
{
	int		min_size;
	char	**space;
	int		x;
	int		y;

	x = 0;
	y = 0;

	while (something)
	{
		space = ft_new_space(min_size);
		if (ft_recursive_solver(space, pcs_left, x, y) == 1)
			return (space);
		else
			min_size++;
	}
}
