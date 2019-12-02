/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhugo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 18:18:32 by bhugo             #+#    #+#             */
/*   Updated: 2019/06/19 18:23:34 by bhugo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int number;
	int sign;

	sign = 0;
	number = 0;
	while (ft_isspace(*str) == 1)
		str++;
	if ((*str == '-' || *str == '+') && ft_isdigit(*(str + 1)) == 1)
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (ft_isdigit(*str) == 1)
	{
		if (ft_overflow_check(number, *str, sign) == -1)
			return (-1);
		else if (ft_overflow_check(number, *str, sign) == 0)
			return (0);
		number = number * 10 + *str - 48;
		str++;
	}
	if (sign == -1)
		return (-number);
	return (number);
}
