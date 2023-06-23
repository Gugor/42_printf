/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 18:13:11 by hmontoya          #+#    #+#             */
/*   Updated: 2023/06/22 18:55:54 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PRINTF_H
# define PRINTF_H
# include <stdio.h>
# include <stdarg.h>
# include "libft.h"

char *ft_print(const char *format, ...);
char *ft_vprint(va_list args, char *format);
char *ft_set_c(char *format, char *arg, char *fpos);
char *ft_set_s(char *format, char *arg, char *fpos);
char *ft_set_d(char *format, char *arg, char *fpos);
char *ft_set_p(char *format, char *arg, char *fpos);
char *ft_set_i(char *format, char *arg, char *fpos);
char *ft_set_u(char *format, char *arg, char *fpos);
char *ft_set_x(char *format, char *arg, char *fpos);
char *ft_set_X(char *format, char *arg, char *fpos);
#endif
