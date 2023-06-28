/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 18:13:11 by hmontoya          #+#    #+#             */
/*   Updated: 2023/06/28 18:41:46 by hmontoya         ###   ########.fr       */
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
	char	*previous;
	char	*reminder;
	char	*result;
	int		formatlen;
	int		additionlen;
} t_formater;

int		*ft_printf(const char *format, ...);
int		ft_num_flags(const char *format);
int		ft_is_strformat(const char first, const char second);
char	*ft_set_format(char *format, va_list *args);
char	*ft_fill_format(t_formater *formater, char *addition, int lengthtoflag);
char	*ft_set_c(char *format, va_list *args, char flag, char *flagpos);
char	*ft_set_s(char *format, va_list *args, char flag, char *flagpos);
char	*ft_set_d(char *format, va_list *args, char flag, char *flagpos);
//char	*ft_set_p(char *format, int arg, char *fpos);
//char	*ft_set_i(char *format, int arg, char *fpos);
//char	*ft_set_u(char *format, unsigned int arg, char *fpos);
//char	*ft_set_x(char *format, int arg, char *fpos);
//char	*ft_set_X(char *format, int arg, char *fpos);
#endif
