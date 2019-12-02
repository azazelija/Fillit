/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhugo <bhugo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 13:30:50 by bhugo             #+#    #+#             */
/*   Updated: 2019/09/19 18:20:33 by bhugo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	delete(char map[12][12], t_figure *figure, int i, t_map c)
{
	int in;

	in = 0;
	while (in < 4)
	{
		(map[c.y + figure[i].y[in]][c.x + figure[i].x[in]]) = '.';
		in++;
	}
}

void	put_fig(char map[12][12], t_figure *figure, int i, t_map c)
{
	int in;

	in = 0;
	while (in < 4)
	{
		(map[c.y + figure[i].y[in]][c.x + figure[i].x[in]]) = figure[i].letter;
		in++;
	}
}

int		check_free(char map[12][12], t_figure *figure, int i, t_map coord)
{
	int	in;

	in = 0;
	while (in < 4)
	{
		if ((map[coord.y + figure[i].y[in]][coord.x + figure[i].x[in]]) != '.')
			return (0);
		in++;
	}
	put_fig(map, figure, i, coord);
	return (1);
}

int		mapping(char map[12][12], t_figure *figure, t_qua q, int side)
{
	t_map coord;

	coord.y = 0;
	q.first = q.first + 1;
	while ((coord.y + figure[q.first].height) <= side)
	{
		coord.x = 0;
		while ((coord.x + figure[q.first].width) <= side)
		{
			if (check_free(map, figure, q.first, coord))
			{
				if (q.first == q.all || mapping(map, figure, q, side))
					return (1);
				else
					delete(map, figure, q.first, coord);
			}
			coord.x = coord.x + 1;
		}
		coord.y = coord.y + 1;
	}
	return (0);
}

int		solve(char map[12][12], t_qua quantity, t_figure *figure)
{
	int	side;

	side = smallest_side(quantity.all);
	quantity.all = quantity.all - 1;
	while (mapping(map, figure, quantity, side) == 0)
		side++;
	return (side);
}
