/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_c.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 17:36:56 by hmontoya          #+#    #+#             */
/*   Updated: 2023/07/08 19:53:13 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_set_c(char *format, va_list *args, char flag, int flagpos)
{
	char arg;

	if (flag != 'c')
		return (flagpos);
	arg = va_arg(*args, int);
		if (write(1, &arg, 1) == -1)
			return (-1);
	return (flagpos + 1);
}
