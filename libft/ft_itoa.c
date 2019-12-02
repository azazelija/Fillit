/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhugo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 18:20:26 by bhugo             #+#    #+#             */
/*   Updated: 2019/06/19 16:41:22 by bhugo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_order(int n)
{
	int		order;

	order = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n = n / 10;
		order++;
	}
	return (order);
}

char		*ft_itoa(int n)
{
	int		sign;
	char	*p;
	int		count;

	count = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if ((sign = n) < 0)
	{
		n = -n;
		count++;
	}
	count = count + ft_order(n);
	if ((p = ft_strnew(count)) == NULL)
		return (NULL);
	if (n == 0)
		p[0] = '0';
	while (n)
	{
		p[--count] = n % 10 + '0';
		n = n / 10;
	}
	if (sign < 0)
		p[--count] = '-';
	return (p);
}
