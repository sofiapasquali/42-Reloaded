# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shahn <shahn@student.42sp.org.br>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/30 04:38:10 by shahn             #+#    #+#              #
#    Updated: 2022/04/27 00:24:17 by shahn            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
# ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
SRCS = srcs/ft_putchar.c
OBJS = ft_putchar.o
GCC = gcc
CFLAGS = -Werror -Wextra -Wall
LIB = libft.a

all:	$(LIB)

$(LIB):	$(OBJS)
	ar rc $@ $<

$(OBJS):
	$(GCC) $(CFLAGS) -c $(SRCS) -I ./includes/

clean:
	rm -rf $(OBJS)

fclean:	clean
	rm -rf $(LIB)

re:	fclean all

.PHONY:	all clean fclean re