/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhugo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 15:45:15 by bhugo             #+#    #+#             */
/*   Updated: 2019/06/19 18:29:13 by bhugo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	i = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (d == s && d == NULL)
		return (NULL);
	if (s > d)
		while (len > i)
		{
			d[i] = s[i];
			i++;
		}
	else
		while (len > 0)
		{
			len--;
			*(d + len) = *(s + len);
		}
	return (dst);
}
