/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 17:20:54 by hmontoya          #+#    #+#             */
/*   Updated: 2023/07/16 18:34:42 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printhex(unsigned int num, int count)
{
	char	*set;
	int		rs;

	set = "0123456789abcdef";
	rs = 0;
	if (num > 0)
	{
		count = ft_printhex(num / 16, count + 1);
		rs = write(1, set + (num % 16), 1);
		if (rs == -1)
			return (-1);
	}
	return (count);
}

int	ft_set_x(va_list args, char flag)
{
	unsigned int	arg;
	int				i;
	int				rs;

	if (flag != 'x')
		return (0);
	i = 0;
	arg = va_arg(args, int);
	if (arg != 0)
		i = ft_printhex(arg, i);
	else
	{
		rs = write(1, "0", 1);
		if (rs == -1)
			return (-1);
		else
			return (1);
	}
	return (i);
}
