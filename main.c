/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhugo <bhugo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 12:48:04 by bhugo             #+#    #+#             */
/*   Updated: 2019/09/19 17:42:08 by bhugo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		error(void)
{
	ft_putendl("error");
	return (0);
}

void	print(char map[12][12], int i)
{
	int				y;
	int				x;

	y = 0;
	while (y < i)
	{
		x = 0;
		while (x < i)
		{
			ft_putchar(map[y][x]);
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}

int		main(int argc, char **argv)
{
	t_figure		figure[26];
	t_qua			quantity;
	char			map[12][12];
	int				i;

	i = -1;
	if (argc == 2)
	{
		if ((quantity.all = put_in_structure(argv, figure)) == 0)
			return (error());
		while (++i < 11)
		{
			ft_memset(map[i], '.', 11);
			map[i][11] = '\0';
		}
		quantity.first = -1;
		i = solve(map, quantity, figure);
		print(map, i);
	}
	else
		ft_putendl("usage: ./fillit input_file");
	return (0);
}
