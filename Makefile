# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psoares- <psoares-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/29 15:35:32 by psoares-          #+#    #+#              #
#    Updated: 2022/11/29 15:35:35 by psoares-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRC = ft_printf ft_words ft_putnbr_base ft_putnbr_base_unsigned ft_put_pointer ft_strlen\

CC = gcc
RM = rm -f
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)
$(NAME) : $(SRC:=.o)
	ar rc $(NAME) $(SRC:=.o)
clean:
	$(RM) $(SRC:=.o)
fclean: clean
	$(RM) $(NAME)
re: fclean $(NAME)