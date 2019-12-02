/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhugo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 18:21:30 by bhugo             #+#    #+#             */
/*   Updated: 2019/05/22 16:06:11 by bhugo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *p;

	if (s == NULL)
		return (NULL);
	p = ft_strnew(len);
	if (p == NULL)
		return (NULL);
	ft_strncpy(p, s + start, len);
	return (p);
}
