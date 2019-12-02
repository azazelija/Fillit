/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhugo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 17:48:44 by bhugo             #+#    #+#             */
/*   Updated: 2019/06/19 15:33:11 by bhugo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		ft_word_number(char const *str, char c)
{
	size_t	word_number;

	word_number = 0;
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (*str && *str != c)
			word_number++;
		while (*str && *str != c)
			str++;
	}
	return (word_number);
}

static int			ft_wordlen(char const *str, char c)
{
	int	len;

	len = 0;
	while (*str && *str != c)
	{
		str++;
		len++;
	}
	return (len);
}

static char			*ft_cpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char				**ft_strsplit(char const *s, char c)
{
	char	**p;
	size_t	i;
	size_t	k;

	k = 0;
	if (s == NULL)
		return (NULL);
	i = ft_word_number(s, c);
	if ((p = (char **)malloc(sizeof(p) * (i + 1))) == NULL)
		return (NULL);
	while (i > k && *s)
	{
		s = ft_issymbol(s, c) + s;
		if ((p[k] = (char *)malloc(ft_wordlen(s, c) + 1)) == NULL)
		{
			ft_massive_free(p, k);
			return (NULL);
		}
		ft_cpy(p[k++], s, ft_wordlen(s, c));
		s = s + ft_wordlen(s, c);
	}
	p[k] = NULL;
	return (p);
}
