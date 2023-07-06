/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 13:22:36 by hmontoya          #+#    #+#             */
/*   Updated: 2023/07/06 18:50:34 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_is_strformat(const char first, const char second)
{
	char *set;

	set = "csdpiuxX";
	if (('%' == first) && ft_strchr(set, second))
		return (1);
	else
		return (0);
}

int ft_num_flags(const char *format)
{
	int count;
	int len;

	count = 0;
	len = ft_strlen(format) - 1;
	while (*(format + len))
	{
		if (ft_is_strformat(format[len], format[len + 1]) && len >= 0)
			count++;		
		len--;
	}
	return (count);
}

static char *ft_strchr_pos(char *str, char c)
{
	char *flagpos;

	flagpos = ft_strchr(str, c);
	if (*str && ft_isformat(flagpos, *(flagpos + 1)))
		return (flagpos);
	else
		ft_strchr_pos(*(str + (str - flapos)),c);
}

static char *ft_set_format(char *format, va_list *args)
{
	char *flagpos;
	char *tmp;
	char flag;

	tmp = format;
	flagpos = ft_strchr_pos(format, '%');
	flag = *(flagpos + 1);
	tmp = ft_set_c(tmp, args, flag, flagpos - format);
	tmp = ft_set_s(tmp, args, flag, flagpos - format);
	tmp = ft_set_d(tmp, args, flag, flagpos - format);
	tmp = ft_set_i(tmp, args, flag, flagpos - format);
	tmp = ft_set_u(tmp, args, flag, flagpos - format);
	tmp = ft_set_p(tmp, args, flag, flagpos - format);
	tmp = ft_set_x(tmp, args, flag, flagpos - format);
	tmp = ft_set_xx(tmp, args, flag, flagpos - format);
	tmp = ft_set_per(tmp, args, flag, flagpos - format);
	return (tmp);
}

int  ft_printf(const char *format, ...)
{
	char	*result;
	int		num_flags;
	int		i;
	va_list	args;

	result = (char *)format;
	va_start(args, format);
	num_flags = ft_num_flags(format);
	g_state = 0;
	i = 0;
	while (i < num_flags)
	{
		result = ft_set_format(result, &args);
		if (g_state == - 1 )
			break ;
		i++;
	} 	
	va_end(args);
	i = ft_putstr_print(result);
	if (result)
		free(result);
	return (i);
}
