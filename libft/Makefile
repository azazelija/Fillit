# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bhugo <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/17 14:37:19 by bhugo             #+#    #+#              #
#    Updated: 2019/06/19 15:07:45 by bhugo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCES = ft_memset.c\
		  ft_bzero.c\
		  ft_memcpy.c\
		  ft_strlen.c\
		  ft_strcpy.c\
		  ft_strdup.c\
		  ft_strncmp.c\
		  ft_strncpy.c\
		  ft_memchr.c\
		  ft_memcmp.c\
		  ft_strcmp.c\
		  ft_strcat.c\
		  ft_strncat.c\
		  ft_memccpy.c\
		  ft_strchr.c\
		  ft_strrchr.c\
		  ft_strstr.c\
		  ft_strnstr.c\
		  ft_isalpha.c\
		  ft_islower.c\
		  ft_isupper.c\
		  ft_isdigit.c\
		  ft_isalnum.c\
		  ft_isascii.c\
		  ft_isprint.c\
		  ft_toupper.c\
		  ft_tolower.c\
		  ft_putchar.c\
		  ft_putstr.c\
		  ft_memalloc.c\
		  ft_memdel.c\
		  ft_strnew.c\
		  ft_strdel.c\
		  ft_strclr.c\
		  ft_striteri.c\
		  ft_striter.c\
		  ft_strmap.c\
		  ft_strequ.c\
		  ft_strnequ.c\
		  ft_putendl.c\
		  ft_putnbr.c\
		  ft_putchar_fd.c\
		  ft_putstr_fd.c\
		  ft_putendl_fd.c\
		  ft_putnbr_fd.c\
		  ft_strsub.c\
		  ft_strjoin.c\
		  ft_strmapi.c\
		  ft_strtrim.c\
		  ft_lstnew.c\
		  ft_lstdelone.c\
		  ft_lstadd.c\
		  ft_lstiter.c\
		  ft_isspace.c\
		  ft_atoi.c\
		  ft_strlcat.c\
		  ft_memmove.c\
		  ft_itoa.c\
		  ft_strsplit.c\
		  ft_lstdel.c\
		  ft_lstmap.c\
		  ft_overflow_check.c\
		  ft_issymbol.c\
		  ft_massive_free.c\

HEADER = libft.h

OBJECTS = ft_memset.o ft_bzero.o ft_memcpy.o ft_strlen.o ft_strcpy.o ft_strdup.o ft_strncmp.o ft_strncpy.o ft_memchr.o ft_memcmp.o ft_strcmp.o ft_strcat.o ft_strncat.o ft_memccpy.o ft_strchr.o ft_strrchr.o ft_strstr.o ft_strnstr.o ft_isalpha.o ft_isupper.o ft_islower.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_toupper.o ft_tolower.o ft_atoi.o ft_strlcat.o ft_memmove.o\
		  ft_putchar.o ft_putstr.o ft_memalloc.o ft_memdel.o ft_strnew.o ft_strdel.o ft_strclr.o ft_striteri.o ft_striter.o ft_strmap.o ft_strequ.o ft_strnequ.o ft_putendl.o ft_putnbr.o ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o ft_strsub.o ft_strjoin.o ft_strmapi.o ft_strtrim.o ft_itoa.o ft_strsplit.o\
		  ft_lstnew.o ft_lstdelone.o ft_lstadd.o ft_lstiter.o ft_lstdel.o ft_lstmap.o\
		  ft_isspace.o ft_overflow_check.o ft_issymbol.o ft_massive_free.o\

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SOURCES) -I $(HEADER)
	ar rcs $(NAME) $(OBJECTS)

clean:
		/bin/rm -f $(OBJECTS)

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
