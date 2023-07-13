/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 15:18:35 by hmontoya          #+#    #+#             */
/*   Updated: 2023/07/12 19:24:50 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printlonghex(unsigned long num, int count)
{
	char	*set;
	int		module;

	set = "0123456789abcdef";
	module = 0;
	if (num > 0)
	{
		module = num % 16;
		count = ft_printlonghex(num / 16, ++count);
		if (write(1, set + module, 1) == -1)
			return (-1);
	}
	return (count);
}

int	ft_set_p(va_list args, char flag)
{
	char			*ptr;
	unsigned long	arg;
	int				i;

	if (flag != 'p')
		return (0);
	ptr = "0x";
	i = 0;
	while (*ptr)
	{
		if (write(1, ptr, 1) == -1)
			return (-1);
		ptr++;
		i++;
	}
	arg = va_arg(args, unsigned long);
	if (arg == 0)
	{
		if (write(1, "0", 1) == -1)
			return (-1);
		return (i + 1);
	}
	i = ft_printlonghex(arg, i);
	return (i);
}
