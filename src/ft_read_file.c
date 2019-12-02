/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fculator <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 14:00:35 by fculator          #+#    #+#             */
/*   Updated: 2019/09/26 14:00:36 by fculator         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

char	*read_file(int fd){
	char	*tetris;
	char	*buffer;
	int		ret;

	buffer = ft_strnew(BUFF_SIZE);
	if (fd < 0 || read(fd, buffer, 0) < 0)
		return (0);
	tetris = (char*)ft_memalloc(sizeof(char));
	while(ret = read(fd, buffer, BUFF_SIZE))
	{
		buffer[ret] = '\0';
		tetris = ft_strjoin(tetris, buffer);
	}
}

int		ft_get_number_of_tetro(char *str){
	int		count;
	int		i;

	i = 0;
	count = 0;
	while (str[i] != '\0'){
		if (str[i] == '\n' && (str[i + 1]) == '\n' || str[i + 1] == '\0')
			count++;
		i++;
	}
	return (count);
}