/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfinnis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 12:52:29 by dfinnis           #+#    #+#             */
/*   Updated: 2018/11/21 12:52:34 by dfinnis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

#include "libft/libft.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

void		ft_error(void);
char		*classify_tetro(char *sq);
char		**assign_array(char *file);

char		*read_i(char *sq);
int			read_i1(char *sq);
int			read_i2(char *sq);

char		*read_j(char *sq);
int			read_j1(char *sq);
int			read_j2(char *sq);
int			read_j3(char *sq);
int			read_j4(char *sq);

char		*read_l(char *sq);
int			read_l1(char *sq);
int			read_l2(char *sq);
int			read_l3(char *sq);
int			read_l4(char *sq);

char		*read_sq(char *sq);

char		*read_t(char *sq);
int			read_t1(char *sq);
int			read_t2(char *sq);
int			read_t3(char *sq);
int			read_t4(char *sq);

char		*read_z(char *sq);
int			read_z1(char *sq);
int			read_z2(char *sq);
int			read_z3(char *sq);
int			read_z4(char *sq);

void		print_array(char **tetro_array);

int			**ft_convert(char **array);

int			ft_issafe(char **space, int *pieces, int x, int y);
void		ft_update_space(char **space, int *pieces, int x, int y);
void		ft_backtrack(char **space, int *pieces, int x, int y);
int			ft_in_space(int *pieces, int x, int y, int size);
int			ft_recursive_solver(char **space, int **pieces, int min_size);

int			ft_sqrt(int num);
char		**ft_new_space(int min_size);
int			ft_listlen(int **pieces);
char		**start_function(int **pieces);

char		**start_function(int **pieces);

#endif
