/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 18:13:11 by hmontoya          #+#    #+#             */
/*   Updated: 2023/07/08 19:57:49 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PRINTF_H
# define PRINTF_H
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int ft_printf(const char *format, ...);
int	ft_num_flags(const char *format);
int	ft_is_strformat(const char first, const char second);
int	ft_set_format(char *format, va_list *args);
int	ft_set_c(char *format, va_list *args, char flag, int flagpos);
//int	ft_set_s(char *format, va_list *args, char flag, int flagpos);
//int	ft_set_d(char *format, va_list *args, char flag, int flagpos);
//int	ft_set_i(char *format, va_list *args, char flag, int flagpos);
//int	ft_set_u(char *format, va_list *args, char flag, int flagpos);
//int	ft_set_p(char *format, va_list *args, char flag, int flagpos);
//int	ft_set_x(char *format, va_list *args, char flag, int flagpos);
//int	ft_set_xx(char *format, va_list *args, char flag, int flagpos);
//int	ft_set_per(char *format, char flag, int flagpos);
//int	ft_gethex(unsigned long num);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *str);
#endif
