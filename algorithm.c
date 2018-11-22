/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaskeli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 14:22:46 by svaskeli          #+#    #+#             */
/*   Updated: 2018/11/22 09:17:39 by svaskeli         ###   ########.fr       */
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

int		ft_issafe(char **space, char **piece)
{
	return (0); //cannot place;
	return (1); //can place;
}

int		ft_recursive_solver(char **space, char *pcs_left, int x, int y)
{
	/* if we used up all the pieces, we solved to puzzle */
	if (!(*pcs_left))
		return (space);
	while (!(*pcs_left))
	{
		while (space[x])
		{
			while (space[y])
			{
				
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

	while ()
	{
		space = ft_new_space(min_size);
		if (ft_fill(space, pcs_left, x, y) == 1)
			return (space);
		else
			min_size++;
	}
}
