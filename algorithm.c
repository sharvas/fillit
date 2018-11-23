/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaskeli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 14:22:46 by svaskeli          #+#    #+#             */
/*   Updated: 2018/11/23 14:04:43 by svaskeli         ###   ########.fr       */
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
	ft_remove_piece(pieces);
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

	y = 0;
	if (*pieces == NULL)
		return (1);
	while (space[y++] != '\0')
	{
		x = 0;
		while (space[x++] != '\0')
		{
			if (space[y][x] == 0 && ft_issafe(space, pieces, x, y) && ft_space_left(space))
			{
				ft_update_space(space, pieces, x, y);
				return (ft_recursive_solver(space, pieces++));
			}
			else
			{
				ft_backtrack(space, pieces--, x, y);
				return (0);
			}
		}
	}
	return (0);
}

int		ft_sqrt(int num)
{
	int i;

	i = 1;
	while (i * i < num)
		i++;
	return (i);
}

int		*ft_new_istr(int size)
{
	int *str;
	int	x;

	x = 0;
	if(!(str = (int*)malloc(sizeof(int) * size)))
		return (-1);
	while (x < size - 1)
	{
		str[x] = 0;
		x++;
	}
	str[x] = -1; //str terminating char
	return (str);
}

int		**ft_new_space(int min_size)
{
	int y;

	y = 0;
	if (!(**space = (int**)malloc(sizeof(int) * min_size + 1)))
		return (-1);
	while (y < min_size)
	{
		if (!(space[y] = ft_new_istr(min_size + 1)))
			return (-1);
		y++;
	}
	space[y] = NULL;
	return (space);
}

char	**start_function(char **pieces)
{
	char	**space;
	char	**tmp;
	int		res;
	int		min_size;

	min_size = ft_sqrt(ft_listlen(pieces) * 4);
	space = ft_new_space(min_size);
	while ((res = ft_recursive_solver(space, pieces)) != 1)
	{
		tmp = space;
		if (!(space = ft_new_space(min_size++)))
			return (NULL);
		free (tmp);
	}
	if (res == 1)
		return (space);
	return (NULL);
}
