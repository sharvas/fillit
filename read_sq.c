/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfinnis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 10:34:32 by dfinnis           #+#    #+#             */
/*   Updated: 2018/11/21 10:34:34 by dfinnis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		read_sq(char *sq)
{
	if (ft_strcmp(sq, "##..\n##..\n....\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n##..\n##..\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n....\n##..\n##..\n") == 0)
		return (1);
	if (ft_strcmp(sq, ".##.\n.##.\n....\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n.##.\n.##.\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n....\n.##.\n.##.\n") == 0)
		return (1);
	if (ft_strcmp(sq, "..##\n..##\n....\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n..##\n..##\n....\n") == 0)
		return (1);
	if (ft_strcmp(sq, "....\n....\n..##\n..##\n") == 0)
		return (1);
	return (0);
}
