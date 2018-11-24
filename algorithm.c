/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaskeli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 14:22:46 by svaskeli          #+#    #+#             */
/*   Updated: 2018/11/24 17:26:23 by svaskeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "fillit.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "libft/libft.h"

/* read terminos into array[number_of_pieces][9]
 * it will store xy for 3 dots and a letter in an int (1, 2, ...)
 */

int		ft_issafe(char **space, int *pieces, int x, int y)
{
	if (space[y + pieces[0]][x + pieces[1]] == '.' &&
		   space[y + pieces[2]][x + pieces[3]] == '.' &&
		   space[y + pieces[4]][x + pieces[5]] == '.' &&
		   space[y + pieces[6]][x + pieces[7]] == '.')
		return (1);
	else
		return (0);
}

void	ft_update_space(char **space, int *pieces, int x, int y)
{
	space[y + pieces[0]][x + pieces[1]] = pieces[8] + 'A';
	space[y + pieces[2]][x + pieces[3]] = pieces[8] + 'A';
	space[y + pieces[4]][x + pieces[5]] = pieces[8] + 'A';
	space[y + pieces[6]][x + pieces[7]] = pieces[8] + 'A';
}

void	ft_backtrack(char **space, int *pieces, int x, int y)
{
	space[y + pieces[0]][x + pieces[1]] = '.';
	space[y + pieces[2]][x + pieces[3]] = '.';
	space[y + pieces[4]][x + pieces[5]] = '.';
	space[y + pieces[6]][x + pieces[7]] = '.';
}

/*int		ft_space_left(char **space)
{
	int y;
	int x;

	y = 0;
	while (space[y] != NULL)
	{
		x = 0;
		while (space[y][x++] != '\0')
		{
			if (space[y][x] == '.' && (space[y][x + 1] == '.' || space[y + 1][x] == '.'))
				return (1);
		}
		y++;
	}
	return (0);
}*/

int		ft_in_space(int *pieces, int x, int y, int size)
{
	if ((y + pieces[2]) < size && (y + pieces[2]) < size &&
		   (y + pieces[4]) < size && (y + pieces[6]) < size)
		return (1);
	else if ((x + pieces[1]) < size && (x + pieces[3]) < size &&
		   (x + pieces[5]) < size && (x + pieces[7]) < size)
		return (1);
	else
		return (0);
}

int		ft_recursive_solver(char **space, int **pieces, int min_size)
{
	int x;
	int y;
	int i;

	y = 0;
	i = 0;
	if (pieces[i] == NULL)
		return (1);
	while (space[y] != NULL)
	{
		x = 0;
		while (space[y][x] != '\0')
		{
			if (ft_in_space(pieces[i], x, y, min_size) && ft_issafe(space, pieces[i], x, y))
			{
				ft_update_space(space, pieces[i], x, y);
				if (ft_recursive_solver(space, &pieces[i + 1], min_size))
					return (1);
				else
					ft_backtrack(space, pieces[i], x, y);
			}
			x++;
		}
		y++;
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
	int		y;
	int		x;
	char	**space;

	y = 0;
	if (!(space = (char**)malloc(sizeof(char*) * min_size + 1)))
		return (NULL);
	while (y < min_size)
	{
		x = 0;
		if (!(space[y] = ft_strnew(min_size)))
			return (NULL);
		while (x < min_size)
			space[y][x++] = '.';
		y++;
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
	int		res;
	int		min_size;
	int		i;

	min_size = ft_sqrt(ft_listlen(pieces) * 4);
	space = ft_new_space(min_size);
	while ((res = ft_recursive_solver(space, pieces, min_size)) != 1)
	{
		i = 0;
		while (space[i++] != NULL)
			free(space[i]);
		if (!(space = ft_new_space(++min_size)))
			return (NULL);
	}
	return (space);
}
