/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhugo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 21:16:27 by bhugo             #+#    #+#             */
/*   Updated: 2019/06/13 19:53:45 by bhugo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char *p;

	p = (char *)malloc(sizeof(*p) * size);
	if (p == NULL)
		return (NULL);
	else
		ft_bzero(p, size);
	return (p);
}
