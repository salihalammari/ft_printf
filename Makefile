# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slammari <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/12 08:09:50 by slammari          #+#    #+#              #
#    Updated: 2022/01/02 18:33:25 by slammari         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a

LIB = ft_printf.h

SRC = 	ft_printf.c\
		ft_putchar.c\
		ft_put_unsigned_int.c\
		ft_putlowhex.c\
		ft_putnbr.c\
		ft_putpointer.c\
		ft_putstr.c\
		ft_putuphex.c
CFLAGS = -Wall -Werror -Wextra

OBJ = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)

%.o: %.c $(LIB)
	gcc -c $(CFLAGS) $(SRC)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
