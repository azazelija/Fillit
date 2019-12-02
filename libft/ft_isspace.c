/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhugo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 18:35:55 by bhugo             #+#    #+#             */
/*   Updated: 2019/06/04 18:16:23 by bhugo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(int s)
{
	if (s == '\t' || s == '\n' || s == '\v' || \
			s == '\f' || s == '\r' || s == ' ')
		return (1);
	return (0);
}
