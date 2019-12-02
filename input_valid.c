/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_valid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhugo <bhugo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 12:48:38 by bhugo             #+#    #+#             */
/*   Updated: 2019/10/03 12:38:51 by bhugo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		slash_n(char *buff, int ret)
{
	if (buff[4] != '\n')
		return (0);
	if (buff[9] != '\n')
		return (0);
	if (buff[14] != '\n')
		return (0);
	if (buff[19] != '\n')
		return (0);
	if (ret == 21 && buff[20] != '\n')
		return (0);
	return (1);
}

int		input_figure_valid(char *buff)
{
	int index;
	int coupling;

	index = 0;
	coupling = 0;
	while (buff[index])
	{
		if (buff[index] == '#')
		{
			if (buff[index + 1] == '#')
				coupling++;
			if (index != 0 && buff[index - 1] == '#')
				coupling++;
			if (index <= 13 && buff[index + 5] == '#')
				coupling++;
			if (index >= 5 && buff[index - 5] == '#')
				coupling++;
		}
		index++;
	}
	if (coupling == 6 || coupling == 8)
		return (1);
	return (0);
}

int		input_field_valid(char *buff)
{
	int	point;
	int grill;
	int slash_n;
	int index;

	point = 0;
	grill = 0;
	slash_n = 0;
	index = 0;
	while (buff[index])
	{
		if (buff[index] == '.')
			point++;
		if (buff[index] == '#')
			grill++;
		if (buff[index] == '\n')
			slash_n++;
		index++;
	}
	if (point == 12 && grill == 4 && (slash_n == 5 || slash_n == 4))
		return (1);
	return (0);
}

int		input_valid(char *buff, int ret)
{
	if (ret != 21 && ret != 20)
		return (0);
	if (!(input_field_valid(buff)))
		return (0);
	if (!(input_figure_valid(buff)))
		return (0);
	if (!(slash_n(buff, ret)))
		return (0);
	return (1);
}
