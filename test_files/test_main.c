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

	if (!(pieces = (int**)malloc(sizeof(int*) * 5)))
		return (-1);
	while (i < 5)
	{
		if (!(pieces[i] = (int*)malloc(sizeof(int) * 9)))
			return (-1);
		i++;
	}
	// ::
	pieces[0][0] = 0;
	pieces[0][1] = 0;
	pieces[0][2] = 0;
	pieces[0][3] = 1;
	pieces[0][4] = 1;
	pieces[0][5] = 0;
	pieces[0][6] = 1;
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
/*	pieces[4][0] = 0;
	pieces[4][1] = 0;
	pieces[4][2] = 0;
	pieces[4][3] = 1;
	pieces[4][4] = 1;
	pieces[4][5] = 1;
	pieces[4][6] = 2;
	pieces[4][7] = 1;
	pieces[4][8] = 4;
	// .|'
	pieces[5][0] = 0;
	pieces[5][1] = 1;
	pieces[5][2] = 0;
	pieces[5][3] = 2;
	pieces[5][4] = 1;
	pieces[5][5] = 0;
	pieces[5][6] = 1;
	pieces[5][7] = 1;
	pieces[5][8] = 5;
	// |..
	pieces[6][0] = 0;
	pieces[6][1] = 0;
	pieces[6][2] = 1;
	pieces[6][3] = 0;
	pieces[6][4] = 1;
	pieces[6][5] = 1;
	pieces[6][6] = 1;
	pieces[6][7] = 2;
	pieces[6][8] = 6;
	// '|
	pieces[7][0] = 0;
	pieces[7][1] = 0;
	pieces[7][2] = 0;
	pieces[7][3] = 1;
	pieces[7][4] = 1;
	pieces[7][5] = 1;
	pieces[7][6] = 2;
	pieces[7][7] = 1;
	pieces[7][8] = 7;
	// ----
	pieces[8][0] = 0;
	pieces[8][1] = 0;
	pieces[8][2] = 0;
	pieces[8][3] = 1;
	pieces[8][4] = 0;
	pieces[8][5] = 2;
	pieces[8][6] = 0;
	pieces[8][7] = 3;
	pieces[8][8] = 8;
	// '|
	pieces[9][0] = 0;
	pieces[9][1] = 0;
	pieces[9][2] = 0;
	pieces[9][3] = 1;
	pieces[9][4] = 1;
	pieces[9][5] = 1;
	pieces[9][6] = 2;
	pieces[9][7] = 1;
	pieces[9][8] = 9;
	// ----
	pieces[10][0] = 0;
	pieces[10][1] = 0;
	pieces[10][2] = 0;
	pieces[10][3] = 1;
	pieces[10][4] = 0;
	pieces[10][5] = 2;
	pieces[10][6] = 0;
	pieces[10][7] = 3;
	pieces[10][8] = 10;
	// '|
	pieces[11][0] = 0;
	pieces[11][1] = 0;
	pieces[11][2] = 0;
	pieces[11][3] = 1;
	pieces[11][4] = 1;
	pieces[11][5] = 1;
	pieces[11][6] = 2;
	pieces[11][7] = 1;
	pieces[11][8] = 11;
	// ----
	pieces[12][0] = 0;
	pieces[12][1] = 0;
	pieces[12][2] = 0;
	pieces[12][3] = 1;
	pieces[12][4] = 0;
	pieces[12][5] = 2;
	pieces[12][6] = 0;
	pieces[12][7] = 3;
	pieces[12][8] = 12;*/
	//termination
	pieces[4] = NULL;

	space = start_function(pieces);
	while (space[j] != NULL)
	{
		printf("%s\n", space[j]);
		j++;
	}
}
