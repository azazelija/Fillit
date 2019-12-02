/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_figure_in_structure.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhugo <bhugo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 12:48:58 by bhugo             #+#    #+#             */
/*   Updated: 2019/10/03 12:46:25 by bhugo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	size_figure(int struct_index, t_figure *figure)
{
	int	index;
	int	max;

	index = 0;
	max = 0;
	while (index < 4)
	{
		if (max < figure[struct_index].x[index])
			max = figure[struct_index].x[index];
		index++;
	}
	figure[struct_index].width = ++max;
	index = 0;
	max = 0;
	while (index < 4)
	{
		if (max < figure[struct_index].y[index])
			max = figure[struct_index].y[index];
		index++;
	}
	figure[struct_index].height = ++max;
}

int		move_on_y(int struct_index, t_figure *figure)
{
	int	index;

	index = 0;
	while (index < 4)
	{
		if (figure[struct_index].y[index] == 0)
			return (0);
		index++;
	}
	index = 0;
	while (index < 4)
	{
		figure[struct_index].y[index] = figure[struct_index].y[index] - 1;
		index++;
	}
	return (move_on_y(struct_index, figure));
}

int		move_on_x(int struct_index, t_figure *figure)
{
	int	index;

	index = 0;
	while (index < 4)
	{
		if (figure[struct_index].x[index] == 0)
			return (0);
		index++;
	}
	index = 0;
	while (index < 4)
	{
		figure[struct_index].x[index] = figure[struct_index].x[index] - 1;
		index++;
	}
	return (move_on_x(struct_index, figure));
}

void	put_figure_in_xy(int struct_index, char *buff, t_figure *figure)
{
	int	xy_index;
	int	buff_index;

	buff_index = 0;
	xy_index = 0;
	while (buff[buff_index])
	{
		if (buff[buff_index] == '#')
		{
			figure[struct_index].x[xy_index] = buff_index % 5;
			figure[struct_index].y[xy_index++] = buff_index / 5;
		}
		buff_index++;
	}
}

int		put_in_structure(char **argv, t_figure *figure)
{
	int		fd;
	char	buff[22];
	int		ret;
	int		struct_index;

	struct_index = 0;
	if ((fd = open(argv[1], O_RDONLY)) < 0)
		return (0);
	while ((ret = read(fd, buff, 21)) > 0)
	{
		buff[ret] = '\0';
		if (input_valid(buff, ret) == 0)
			return (0);
		put_figure_in_xy(struct_index, buff, figure);
		move_on_x(struct_index, figure);
		move_on_y(struct_index, figure);
		size_figure(struct_index, figure);
		figure[struct_index].letter = 'A' + struct_index;
		struct_index++;
	}
	if (buff[20] == '\n')
		return (0);
	if (struct_index == 0)
		return (0);
	return (struct_index);
}
