/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhugo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:28:00 by bhugo             #+#    #+#             */
/*   Updated: 2019/05/22 16:02:51 by bhugo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
		p[i] = (*f)((char)s[i]);
		i++;
	}
	return (p);
}
