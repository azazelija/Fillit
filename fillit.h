/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhugo <bhugo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 12:49:48 by bhugo             #+#    #+#             */
/*   Updated: 2019/09/19 14:47:02 by bhugo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include "libft/libft.h"

typedef struct	s_point
{
	int			x[4];
	int			y[4];
	int			height;
	int			width;
	char		letter;
}				t_figure;

typedef struct	s_mapfor
{
	int			x;
	int			y;
}				t_map;

typedef struct	s_quant_fig
{
	int			first;
	int			all;
}				t_qua;

int				input_valid(char *buff, int ret);
int				put_in_structure(char **argv, t_figure *figure_depot);
int				solve(char map[12][12], t_qua quantity, t_figure *figure_depot);
int				smallest_side(int str_ind);
char			**fill_map();

#endif
