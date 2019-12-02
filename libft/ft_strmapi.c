/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhugo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 00:03:09 by bhugo             #+#    #+#             */
/*   Updated: 2019/05/22 16:04:06 by bhugo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*p;
	int		i;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	p = ft_strnew(ft_strlen(s));
	if (p == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		p[i] = (*f)(i, (char)s[i]);
		i++;
	}
	return (p);
}
