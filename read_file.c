/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfinnis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 08:19:43 by dfinnis           #+#    #+#             */
/*   Updated: 2018/11/26 08:19:45 by dfinnis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "fillit.h"

void		ft_error(void)
{
	ft_putstr("error\n");
	exit(1);
}

char		*classify_tetro(char *sq)
{
	if (read_i(sq))
		return (read_i(sq));
	if (read_j(sq))
		return (read_j(sq));
	if (read_l(sq))
		return (read_l(sq));
	if (read_sq(sq))
		return (read_sq(sq));
	if (read_t(sq))
		return (read_t(sq));
	if (read_z(sq))
		return (read_z(sq));
	ft_error();
	return (NULL);
}

char		**assign_array(char *file)
{
	char	**tetro_array;
	char	*sq;
	int		i;
	int		end;

	i = 0;
	end = 0;
	if (!file || !(tetro_array = (char **)malloc(sizeof(char *) * 27)))
		ft_error();
	while (!end && i < 27)
	{
		if (!(sq = ft_strndup(file, 20)))
			ft_error();
		if (file[20] != '\n')
			end = 1;
		else
			file += 21;
		if ((end && file[20] != '\0'))
			ft_error();
		tetro_array[i++] = ft_strdup(classify_tetro(sq));
		if (sq)
			free(sq);
	}
	tetro_array[i] = NULL;
	return (tetro_array);
}
