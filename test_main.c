/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaskeli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 11:12:29 by svaskeli          #+#    #+#             */
/*   Updated: 2018/11/24 17:44:16 by svaskeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft/libft.h"

char	**start_function(int **pieces);

int		main(void)
{
	char	**space;
	int		i = 0;
	int		j = 0;
	int		**pieces;

	if (!(pieces = (int**)malloc(sizeof(int*) * 8)))
		return (-1);
	while (i < 8)
	{
		if (!(pieces[i] = (int*)malloc(sizeof(int) * 9)))
			return (-1);
		i++;
	}
	// '|
	pieces[0][0] = 0;
	pieces[0][1] = 0;
	pieces[0][2] = 0;
	pieces[0][3] = 1;
	pieces[0][4] = 1;
	pieces[0][5] = 1;
	pieces[0][6] = 2;
	pieces[0][7] = 1;
	pieces[0][8] = 0;
	// ----
	pieces[1][0] = 0;
	pieces[1][1] = 0;
	pieces[1][2] = 0;
	pieces[1][3] = 1;
	pieces[1][4] = 0;
	pieces[1][5] = 2;
	pieces[1][6] = 0;
	pieces[1][7] = 3;
	pieces[1][8] = 1;
	// |..
	pieces[2][0] = 0;
	pieces[2][1] = 0;
	pieces[2][2] = 1;
	pieces[2][3] = 0;
	pieces[2][4] = 1;
	pieces[2][5] = 1;
	pieces[2][6] = 1;
	pieces[2][7] = 2;
	pieces[2][8] = 2;
	// '|.
	pieces[3][0] = 0;
	pieces[3][1] = 0;
	pieces[3][2] = 0;
	pieces[3][3] = 1;
	pieces[3][4] = 1;
	pieces[3][5] = 1;
	pieces[3][6] = 1;
	pieces[3][7] = 2;
	pieces[3][8] = 3;
	// '|
	pieces[4][0] = 0;
	pieces[4][1] = 0;
	pieces[4][2] = 0;
	pieces[4][3] = 1;
	pieces[4][4] = 1;
	pieces[4][5] = 1;
	pieces[4][6] = 2;
	pieces[4][7] = 1;
	pieces[4][8] = 0;
	// ----
/*	pieces[5][0] = 0;
	pieces[5][1] = 0;
	pieces[5][2] = 0;
	pieces[5][3] = 1;
	pieces[5][4] = 0;
	pieces[5][5] = 2;
	pieces[5][6] = 0;
	pieces[5][7] = 3;
	pieces[5][8] = 1;*/
	// |..
	pieces[6][0] = 0;
	pieces[6][1] = 0;
	pieces[6][2] = 1;
	pieces[6][3] = 0;
	pieces[6][4] = 1;
	pieces[6][5] = 1;
	pieces[6][6] = 1;
	pieces[6][7] = 2;
	pieces[6][8] = 2;
	// '|
	pieces[5][0] = 0;
	pieces[5][1] = 0;
	pieces[5][2] = 0;
	pieces[5][3] = 1;
	pieces[5][4] = 1;
	pieces[5][5] = 1;
	pieces[5][6] = 2;
	pieces[5][7] = 1;
	pieces[5][8] = 0;
	// ----
/*	pieces[8][0] = 0;
	pieces[8][1] = 0;
	pieces[8][2] = 0;
	pieces[8][3] = 1;
	pieces[8][4] = 0;
	pieces[8][5] = 2;
	pieces[8][6] = 0;
	pieces[8][7] = 3;
	pieces[8][8] = 1;*/
	// termination
	pieces[7] = NULL;

	space = start_function(pieces);
	while (space[j] != NULL)
	{
		printf("%s\n", space[j]);
		j++;
	}
}
