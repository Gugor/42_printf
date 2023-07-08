# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/21 17:43:46 by hmontoya          #+#    #+#              #
#    Updated: 2023/07/08 16:29:47 by hmontoya         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a 
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I ./ 
EPS = libft.h ft_printf.h 
OBJ = ft_printf.o ft_fill_format.o ft_gethex.o ft_putstr_print.o ft_set_c.o ft_set_d.o \
	  ft_set_i.o ft_set_per.o ft_set_s.o ft_set_u.o ft_set_x.o ft_set_x.o ft_set_xx.o \
	  ft_set_p.o ft_calloc.o ft_strlen.o ft_strlcpy.o ft_itoa.o ft_strchr.o ft_strlcat.o ft_substr.o \
	  ft_toupper.o ft_strdup.o ft_bzero.o ft_strjoin.o 

all: $(NAME)

%.o : %.c $(DEPS) $(FT_DIR)
	$(CC) $(CFLAGS) -c -o $@ $< 

$(NAME) : $(OBJ) $(FT_DIR) 
	@ar rcsv $(NAME) $(OBJ) 

clean :
	@rm -vf $(OBJ)

fclean: clean
	@rm -fv $(NAME)

re: fclean all

.PHONY : clean fclean re all
