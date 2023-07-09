/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 13:22:36 by hmontoya          #+#    #+#             */
/*   Updated: 2023/07/09 18:55:40 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_is_strformat(const char first, const char second)
{
	char *set;

	set = "csdpiuxX%";
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

int ft_set_format(char *format, va_list *args)
{
	char flag;
	int result;

	flag = *(format + 1);
	result = ft_set_c(args, flag);
	result = ft_set_s(args, flag);
	result = ft_set_d(args, flag);
	result = ft_set_i(args, flag);
	//ft_set_u(format, args, flag, flagpos - format);
	//ft_set_p(format, args, flag, flagpos - format);
	//ft_set_x(format, args, flag, flagpos - format);
	//ft_set_xx(format, args, flag, flagpos - format);
	//ft_set_per(tmp, flag, flagpos - format);
	return (result);
}

int  ft_printf(const char *format, ...)
{
	va_list	args;
	int		num_flags;
	int		i;

	i = 0;
	va_start(args, format);
	while (*(format))
	{
		if (!ft_is_strformat(*format, *(format + 1)))
		{
			if (write(1, format, 1) == -1)
				return (-1);
			format++;
		}
		else
		{
			i += ft_set_format((char *)format, &args);
			format += 2;
		}
		i++;
	} 	
	va_end(args);
	return (i);
}
