/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 13:22:36 by hmontoya          #+#    #+#             */
/*   Updated: 2023/07/08 19:59:22 by hmontoya         ###   ########.fr       */
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
	char *flagpos;
	char flag;
	int result;

	flag = *(flagpos + 1);
	result = ft_set_c(format, args, flag, flagpos - format);
	//ft_set_s(*format, args, flag, flagpos - format);
	//ft_set_d(*format, args, flag, flagpos - format);
	//ft_set_i(*format, args, flag, flagpos - format);
	//ft_set_u(*format, args, flag, flagpos - format);
	//ft_set_p(*format, args, flag, flagpos - format);
	//ft_set_x(*format, args, flag, flagpos - format);
	//ft_set_xx(*format, args, flag, flagpos - format);
	//ft_set_per(tmp, flag, flagpos - format);
	return (result);
}

int  ft_printf(const char *format, ...)
{
	va_list	args;
	int		result;
	int		num_flags;
	int		i;

	result = 0;
	i = 0;
	va_start(args, format);
	while (*(format + i))
	{
		if (ft_is_strformat(*format, *(format + 1)))
		{
			result = ft_set_format((char *)format, &args);
		}
		if (write(1, format + i + result, 1))
			return (-1);
		i++;
	} 	
	va_end(args);
	return (i);
}
