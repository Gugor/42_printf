/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 13:22:36 by hmontoya          #+#    #+#             */
/*   Updated: 2023/07/12 17:42:10 by hmontoya         ###   ########.fr       */
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

int ft_set_format(char *format, va_list args)
{
	char flag;
	int result;

	flag = *(format + 1);
	result = 0;
	result += ft_set_c(args, flag);
	result += ft_set_s(args, flag);
	result += ft_set_d(args, flag);
	result += ft_set_i(args, flag);
	result += ft_set_u(args, flag);
	result += ft_set_x(args, flag);
	result += ft_set_xx(args, flag);
	result += ft_set_p(args, flag);
	result += ft_set_per(flag);
	return (result);
}

int  ft_printf(const char *format, ...)
{
	va_list	args;
	int		num_flags;
	int		i;
	int		count;

	i = 0;
	va_start(args, format);
	while (*(format))
	{
		if (!ft_is_strformat(*format, *(format + 1)))
		{
			if (write(1, format, 1) == -1)
				return (-1);
			format++;
			i++;
		}
		else
		{
			count = ft_set_format((char *)format, args);
			if (count == -1)
				return (-1);
			i += count;
			format += 2;
		}
	} 	
	va_end(args);
	return (i);
}
