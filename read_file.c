/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfinnis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 08:19:43 by dfinnis           #+#    #+#             */
/*   Updated: 2018/12/01 19:50:31 by svaskeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		**ft_convert_slave(char **array, int **pieces, int n)
{
	int x;
	int y;
	int j;
	int k;

	x = 0;
	y = 0;
	j = 0;
	k = 0;
	while (array[n][j] != '\0')
	{
		if (array[n][j] == '#')
		{
			pieces[n][k++] = y;
			pieces[n][k++] = x;
		}
		if (array[n][j] == '\n')
			y++;
		array[n][j++] == '\n' ? x = 0 : x++;
	}
	pieces[n][k] = n;
	return (pieces);
}

int		**ft_convert(char **array)
{
	int **pieces;
	int n;
	int i;

	n = 0;
	i = ft_listlen_char(array);
	if (!(pieces = (int**)malloc(sizeof(int*) * i + 1)))
		ft_error();
	while (n < i)
	{
		if (!(pieces[n] = (int*)malloc(sizeof(int) * 9)))
			ft_error();
		ft_convert_slave(array, pieces, n++);
	}
	pieces[n] = NULL;
	ft_2d_char_free(array);
	return (pieces);
}

char	*ft_classify_tetro(char *sq)
{
	if (ft_read_i(sq))
		return (ft_read_i(sq));
	if (ft_read_j(sq))
		return (ft_read_j(sq));
	if (ft_read_l(sq))
		return (ft_read_l(sq));
	if (ft_read_sq(sq))
		return (ft_read_sq(sq));
	if (ft_read_t(sq))
		return (ft_read_t(sq));
	if (ft_read_z(sq))
		return (ft_read_z(sq));
	ft_error();
	return (NULL);
}

char	**ft_assign_array(char *file)
{
	char	**tetro_array;
	char	*sq;
	int		i;
	int		end;

	i = 0;
	end = 0;
	if (!file || !(tetro_array = (char **)malloc(sizeof(char *) * 27)))
		ft_error();
	while (!end && i < 27) //do we need to return error if we have more than 26 pcs?
	{
		if (!(sq = ft_strndup(file, 20)))
			ft_error();
		if (file[20] != '\n')
			end = 1;
		else
			file += 21;
		if ((end && file[20] != '\0'))
			ft_error();
		tetro_array[i++] = ft_strdup(ft_classify_tetro(sq));
		if (sq)
			free(sq);
	}
	tetro_array[i] = NULL;
	return (tetro_array);
}
