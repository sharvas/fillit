/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_rhythm.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaskeli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 13:50:17 by svaskeli          #+#    #+#             */
/*   Updated: 2018/12/02 13:50:21 by svaskeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_in_space(int *pieces, int x, int y, int size)
{
	if ((y + pieces[0]) < size && (y + pieces[2]) < size &&
		(y + pieces[4]) < size && (y + pieces[6]) < size)
	{
		if ((x + pieces[1]) < size && (x + pieces[3]) < size &&
			(x + pieces[5]) < size && (x + pieces[7]) < size)
			return (1);
		return (0);
	}
	else
		return (0);
}

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
