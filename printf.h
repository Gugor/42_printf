/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 18:13:11 by hmontoya          #+#    #+#             */
/*   Updated: 2023/07/01 19:10:43 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PRINTF_H
# define PRINTF_H
# include <stdio.h>
# include <stdarg.h>
# include "./libft/libft.h"
int g_state;
typedef struct s_formater 
{
	char	*format;
	char	*pref;
	char	*suf;
	char	*result;
	int		fmtlen;
	int		addlen;
} t_formater;

int		*ft_printf(const char *format, ...);
int		ft_num_flags(const char *format);
int		ft_is_strformat(const char first, const char second);
char	*ft_set_format(char *format, va_list *args);
char	*ft_fill_format(t_formater *fmt, char *addition, int lengthtoflag);
char	*ft_set_c(char *format, va_list *args, char flag, int flagpos);
char	*ft_set_s(char *format, va_list *args, char flag, int flagpos);
char	*ft_set_d(char *format, va_list *args, char flag, int flagpos);
char	*ft_set_i(char *format, va_list *args, char flag, int flagpos);
char	*ft_set_u(char *format, va_list *args, char flag, int flagpos);
char	*ft_set_p(char *format, va_list *args, char flag, int flagpos);
char	*ft_set_x(char *format, va_list *args, char flag, int flagpos);
char	*ft_set_xx(char *format, va_list *args, char flag, int flagpos);
char	*ft_gethex(unsigned int num);
//char	*ft_set_X(char *format, int arg, char *fpos);
#endif
