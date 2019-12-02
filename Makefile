# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bhugo <bhugo@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/06 15:22:24 by bhugo             #+#    #+#              #
#    Updated: 2019/09/19 14:41:34 by bhugo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 	fillit

SRCS = 	main.c \
		input_valid.c \
		put_figure_in_structure.c \
		map.c \
		solve.c \

OBJS = 	main.o \
		input_valid.o \
		put_figure_in_structure.o \
		map.o \
		solve.o \

FLAGS = -Wall -Wextra -Werror

LIB = make -C libft/

H_DIR = ./

LIB_DIR = ./libft/

all: $(NAME)

$(NAME):
	$(LIB)
	gcc -c $(SRCS) -I $(H_DIR) -I $(LIB_DIR) $(FLAGS)
	gcc $(OBJS) -o $(NAME) -L $(LIB_DIR) -lft

clean:
	rm -f $(OBJS)
	make clean -C $(LIB_DIR)

fclean:
	rm -f $(NAME)
	rm -f $(OBJS)
	make fclean -C $(LIB_DIR)

re: fclean all