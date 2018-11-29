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

int		ft_listlen_char(char **array);
int		**ft_convert_slave(char **array,int **pieces,int n);
int		**ft_convert(char **array);
char	*ft_classify_tetro(char *sq);
char	**ft_assign_array(char *file);

char	*ft_read_i(char *sq);
int		ft_read_i1(char *sq);
int		ft_read_i2(char *sq);

char	*ft_read_j(char *sq);
int		ft_read_j1(char *sq);
int		ft_read_j2(char *sq);
int		ft_read_j3(char *sq);
int		ft_read_j4(char *sq);

char	*ft_read_l(char *sq);
int		ft_read_l1(char *sq);
int		ft_read_l2(char *sq);
int		ft_read_l3(char *sq);
int		ft_read_l4(char *sq);

char	*ft_read_sq(char *sq);

char	*ft_read_t(char *sq);
int		ft_read_t1(char *sq);
int		ft_read_t2(char *sq);
int		ft_read_t3(char *sq);
int		ft_read_t4(char *sq);

char	*ft_read_z(char *sq);
int		ft_read_z1(char *sq);
int		ft_read_z2(char *sq);
int		ft_read_z3(char *sq);
int		ft_read_z4(char *sq);

int		ft_sqrt(int num);
int		ft_listlen_int(int **pieces);
char	**ft_new_space(int min_size);
int		ft_recursive_solver(char **space, int **pieces, int min_size);
char	**ft_start_function(int **pieces);

int		ft_in_space(int *pieces, int x, int y, int size);
int		ft_issafe(char **space, int *pieces, int x, int y);
void	ft_update_space(char **space, int *pieces, int x, int y);
void	ft_backtrack(char **space, int *pieces, int x, int y);

void	ft_exit_usage(void);
void	ft_error(void);
void	ft_print_array(char **array);

#endif
