/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhugo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 18:17:13 by bhugo             #+#    #+#             */
/*   Updated: 2019/06/19 18:29:51 by bhugo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*h;
	char	*n;
	size_t	l;

	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack && len)
	{
		l = len;
		n = (char *)needle;
		h = (char *)haystack;
		while (*haystack && *n && *haystack == *n && len)
		{
			haystack++;
			n++;
			len--;
		}
		if (*n == '\0')
			return (h);
		len = l - 1;
		haystack = h + 1;
	}
	return (NULL);
}
