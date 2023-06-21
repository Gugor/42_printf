# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/21 17:43:46 by hmontoya          #+#    #+#              #
#    Updated: 2023/06/21 18:08:30 by hmontoya         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I ./
DEPS = printf.h libft.h libft.a Makefile
OBJ = ft_printf.o

all: $(NAME)

%.o : %.c $(DEPS)
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME) : $(OBJ)
	@ar rcsv $(NAME) $(OBJ)

clean :
	@rm -vf $(OBJ)

fclean: clean
	@rm -fv $(NAME)

re: fclean all

.PHONY : clean fclean re all
