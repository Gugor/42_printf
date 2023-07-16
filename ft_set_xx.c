/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_xx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 17:34:35 by hmontoya          #+#    #+#             */
/*   Updated: 2023/07/16 14:16:03 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printhex(unsigned int num, int count)
{
	char	*set;
	int		module;

	set = "0123456789ABCDEF";
	module = 0;
	if (num > 0)
	{
		module = num % 16;
		count = ft_printhex(num / 16, ++count);
		if (write(1, set + module, 1) == -1)
			return (-1);
	}
	return (count);
}

int	ft_set_xx(va_list args, char flag)
{
	int				arg;
	unsigned int	i;

	if (flag != 'X')
		return (0);
	i = 0;
	arg = va_arg(args, unsigned int);
	if (arg == 0)
	{
		if (write(1, "0", 1) == -1)
			return (-1);
		else
			return (1);
	}
	i = ft_printhex(arg, i);
	return (i);
}
