/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaskeli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 14:22:46 by svaskeli          #+#    #+#             */
/*   Updated: 2018/11/22 18:21:49 by svaskeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fillit.h>

/* read terminos into array[number_of_pieces][9]
 * it will store xy coordinates for 4 dots (x, y, ...) and a letter in int (A(1), B(2), ...)
 * 
 */

/*int		**ft_convert_to_coord(char piece)
{
	int coord[4][4];
	int i;

	if (piece == A to D)
		coord -> xx, xx, xx, xx;
	if (piece == D to K)
		coord -> xx, xx, xx, xx;
	...
	return (coord);
}*/

int		ft_issafe(char **space, int **pieces, int x, int y)
{
	return (0); //cannot place;
	return (1); //can place;
}

int		ft_update_space(char **space, int **pieces, int x, int y)
{
	return (0); //failed to update
	return (1); //updated
}

int		*ft_remove_piece(int **pieces)
{
	return (0);
	return (1);
}

int		ft_backtrack(char **space, int **pieces, int x, int y)
{
	return (0); //failed to backtrack
	return (1); //backtracked
}

int		ft_add_piece(int *pcs, int **pieces)
{
	return (0); //failed to add back
	return (1); //added back
}

int		ft_space_left(char **space)
{
	return (0); //if there are no 4 size space
	return (1); //if there are 4 size space left
}

int		ft_recursive_solver(char **space, int **pieces)
{
	int x;
	int y;
	int *pcs;

	x = 0;
	y = 0;
	if(!(pcs = (int*)malloc(sizeof(int) * 9)))
		return (-1);
	if (ft_listlen(pieces) == 0) //has to be in libft
		return (1);
	while (ft_listlen(pcs_left) != 0) //has to be in libft
	{
		while (space[y] != '\0')
		{
			while (space[x] != '\0')
			{
				pcs = ft_memcpy(pieces[0], pcs, 9);
				if (space[y][x] == 0 && ft_issafe(space, pieces, x, y) && ft_space_left(space))
				{
					ft_update_space(space, pieces, x, y);
					ft_remove_piece(pieces);
					ft_recursive_solver(space, pieces);
					return (1);
				}
				else
				{
					ft_backtrack(space, pieces, x, y);
					ft_add_piece(pcs, pieces);
					return (0);
				}
				x++;
			}
			x = 0;
			y++;
		}
		y = 0;
	}
	free (pcs);
	return (0);
}

int		ft_sqrt(int num) //add to libft
{
	return (num);
}

int		**ft_new_space(int min_size)
{
	min_size = ft_sqrt(ft_strlen(pcs_left)*4);
	**space = space[min_size][min_size];
}

char	**start_function(char *pcs_left)
{
	int		min_size;
	char	**space;
	int		x;
	int		y;

	x = 0;
	y = 0;

	while (/*still unsolved*/)
	{
		space = ft_new_space(min_size);
		if (ft_recursive_solver(space, pcs_left, x, y) == 1)
			return (space);
		else
			min_size++;
	}
	return (NULL);
}
