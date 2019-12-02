/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhugo <bhugo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 22:58:10 by bhugo             #+#    #+#             */
/*   Updated: 2019/10/08 17:12:44 by bhugo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	smallest_side(int str_ind)
{
	int	i;
	int	square;
	int	side;

	i = 0;
	str_ind = str_ind * 4;
	side = 2;
	while (i < 10)
	{
		square = side * side;
		if (square >= str_ind)
			return (side);
		side++;
		i++;
	}
	return (0);
}
