# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shahn <shahn@student.42sp.org.br>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/04 03:59:55 by shahn             #+#    #+#              #
#    Updated: 2022/04/27 00:41:07 by shahn            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ft_display_file
CFLAGS	= -Wall -Werror -Wextra
GCC		= gcc
INCLUDE = includes/
SRCS	= srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_display_file.c main.c
OBJS	 = srcs/ft_putchar.o srcs/ft_putstr.o srcs/ft_display_file.o main.o

all:	$(NAME)

%.o:	%.c
	$(GCC) $(CFLAGS) -c $< -o $@ -I ${INCLUDE}

$(NAME):	$(OBJS)
	$(GCC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean:	 clean
	rm -rf $(NAME)

re:	 fclean all

.PHONY: re fclean clean all