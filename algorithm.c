/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaskeli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 14:22:46 by svaskeli          #+#    #+#             */
/*   Updated: 2018/11/23 16:21:29 by svaskeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fillit.h>

/* read terminos into array[number_of_pieces][7]
 * it will store xy coordinates for 3 dots (excluding 0, 0) and a letter in int (1, 2, ...)
 * 
 */

int		ft_issafe(char **space, int **pieces, int x, int y)
{
	if (space[y][x] == '.' && space[y + *pieces[0]][x + *pieces[1]] == '.' &&
		   space[y + *pieces[2]][x + *pieces[3]] == '.' &&
		   space[y + *pieces[4]][x + *pieces[5]] == '.')
		return (1);
	else
		return (0);
}

void	ft_update_space(char **space, int **pieces, int x, int y)
{
	space[y][x] = *piece[6] + 'A';
	space[y + *pieces[0]][x + *pieces[1]] = *pieces[6] + 'A';
	space[y + *pieces[2]][x + *pieces[3]] = *pieces[6] + 'A';
	space[y + *pieces[4]][x + *pieces[5]] = *pieces[6] + 'A';
}

void	ft_backtrack(char **space, int **pieces, int x, int y)
{
	space[y][x] = '.';
	space[y + *pieces[0]][x + *pieces[1]] = '.';
	space[y + *pieces[2]][x + *pieces[3]] = '.';
	space[y + *pieces[4]][x + *pieces[5]] = '.';
}

/* int		ft_space_left(char **space)
{
	int y;
	int x;

	y = 0;
	while (space[y++] != NULL)
	{
		x = 0;
		while (space[y][x++] != -1)
		{
			if (space[y][x] == 0)
				//need a way to check if there is more than 3 spaces together
		}
	}
	return (0); //if there are no 4 size space
	return (1); //if there are 4 size space left
} */

int		ft_recursive_solver(char **space, int **pieces)
{
	int x;
	int y;

	y = 0;
	if (*pieces == NULL)
		return (1);
	while (space[y++] != NULL)
	{
		x = 0;
		while (space[y][x++] != '\0')
		{
			if (ft_issafe(space, pieces, x, y)/* && ft_space_left(space)*/)
			{
				ft_update_space(space, pieces, x, y);
				return (ft_recursive_solver(space, &(++*pieces)));
			}
			else
			{
				ft_backtrack(space, &(--*pieces), x, y);
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

char	**ft_new_space(int min_size)
{
	int y;
	int x;

	y = 0;
	x = 0;
	if (!(**space = (char**)malloc(sizeof(char) * min_size + 1)))
		return (-1);
	while (y++ < min_size)
	{
		if (!(space[y] = ft_strnew(min_size)))
			return (-1);
		while (x++ < min_size)
			space[y][x] = '.';
		x = 0;
	}
	space[y] = NULL;
	return (space);
}

int		ft_listlen(int **pieces) 
{
	int i;

	i = 0;
	while (pieces[i] != NULL)
		i++;
	return (i);
}

char	**start_function(int **pieces)
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
		if (!(space = ft_new_space(++min_size)))
			return (NULL);
		while (*tmp != NULL)
		{
			free(*tmp);
			*tmp++;
		}
		free (tmp);
	}
	if (res == 1)
		return (space);
	return (NULL);
}
