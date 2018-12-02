/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfinnis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 08:19:43 by dfinnis           #+#    #+#             */
/*   Updated: 2018/12/02 17:33:12 by dfinnis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		**ft_convert_slave(t_lista array, int n)
{
	int x;
	int y;
	int j;
	int k;

	x = 0;
	y = 0;
	j = 0;
	k = 0;
	while (array.tetro_array[n][j] != '\0')
	{
		if (array.tetro_array[n][j] == '#')
		{
			array.pieces[n][k++] = y;
			array.pieces[n][k++] = x;
		}
		if (array.tetro_array[n][j] == '\n')
			y++;
		array.tetro_array[n][j++] == '\n' ? x = 0 : x++;
	}
	array.pieces[n][k] = n;
	return (array.pieces);
}

int		**ft_convert(t_lista array)
{
	int n;
	int i;

	n = 0;
	i = ft_listlen_char(array.tetro_array);
	if (!(array.pieces = (int**)malloc(sizeof(int*) * (i + 1))))
		ft_error(array);
	while (n < i)
	{
		if (!(array.pieces[n] = (int*)malloc(sizeof(int) * 9)))
			ft_error(array);
		ft_convert_slave(array, n++);
	}
	array.pieces[n] = NULL;
	ft_2d_char_free(array.tetro_array);
	return (array.pieces);
}

char	*ft_classify_tetro(t_lista array, int i)
{
	if (ft_read_i(array.sq))
		return (ft_read_i(array.sq));
	if (ft_read_j(array.sq))
		return (ft_read_j(array.sq));
	if (ft_read_l(array.sq))
		return (ft_read_l(array.sq));
	if (ft_read_sq(array.sq))
		return (ft_read_sq(array.sq));
	if (ft_read_t(array.sq))
		return (ft_read_t(array.sq));
	if (ft_read_z(array.sq))
		return (ft_read_z(array.sq));
	array.tetro_array[i] = NULL;
	ft_error(array);
	return (NULL);
}

void	ft_ass_slave(t_lista array, int i)
{
	array.tetro_array[i] = NULL;
	ft_error(array);
}

char	**ft_assign_array(char *file, t_lista array)
{
	int		i;
	int		end;

	i = 0;
	end = 0;
	if (!file || !(array.tetro_array = (char **)malloc(sizeof(char *) * 27)))
		ft_ass_slave(array, i);
	while (!end && i < 26)
	{
		if (!(array.sq = ft_strndup(file, 20)))
			ft_ass_slave(array, i);
		if (file[20] != '\n')
			end = 1;
		else
			file += 21;
		if ((end && file[20] != '\0'))
			ft_ass_slave(array, i);
		if (!(array.tetro_array[i] = ft_strdup(ft_classify_tetro(array, i))))
			ft_ass_slave(array, i);
		if (array.sq)
			free(array.sq);
		i++;
	}
	array.tetro_array[i] = NULL;
	return (array.tetro_array);
}
