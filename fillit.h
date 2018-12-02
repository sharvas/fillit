/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfinnis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 12:52:29 by dfinnis           #+#    #+#             */
/*   Updated: 2018/12/02 18:46:04 by svaskeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include "libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct	s_lista
{
	int			**pieces;
	char		**tetro_array;
	char		**space;
	char		*sq;
}				t_lista;

int				**ft_convert_slave(t_lista array, int n);
int				**ft_convert(t_lista array);
char			*ft_classify_tetro(t_lista array, int i);
void			ft_error_null(t_lista array, int i);
char			**ft_assign_array(char *file, t_lista array);

int				ft_read_i1(char *sq);
int				ft_read_i2(char *sq);
char			*ft_read_i(char *sq);

int				ft_read_j1(char *sq);
int				ft_read_j2(char *sq);
int				ft_read_j3(char *sq);
int				ft_read_j4(char *sq);
char			*ft_read_j(char *sq);

int				ft_read_l1(char *sq);
int				ft_read_l2(char *sq);
int				ft_read_l3(char *sq);
int				ft_read_l4(char *sq);
char			*ft_read_l(char *sq);

char			*ft_read_sq(char *sq);

int				ft_read_t1(char *sq);
int				ft_read_t2(char *sq);
int				ft_read_t3(char *sq);
int				ft_read_t4(char *sq);
char			*ft_read_t(char *sq);

int				ft_read_z1(char *sq);
int				ft_read_z2(char *sq);
int				ft_read_z3(char *sq);
int				ft_read_z4(char *sq);
char			*ft_read_z(char *sq);

char			**ft_new_space(int min_size, t_lista array);
int				ft_recursive_solver(char **space, int **pieces, int min_size);
char			**ft_start_function(t_lista array);

int				ft_in_space(int *pieces, int x, int y, int size);
int				ft_issafe(char **space, int *pieces, int x, int y);
void			ft_update_space(char **space, int *pieces, int x, int y);
void			ft_backtrack(char **space, int *pieces, int x, int y);

void			ft_exit_usage(void);
void			ft_free_all(t_lista array);
void			ft_error(t_lista array);
void			ft_print_array(char **array);

#endif
