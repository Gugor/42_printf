/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_c.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 17:36:56 by hmontoya          #+#    #+#             */
/*   Updated: 2023/07/08 20:45:53 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_set_c(char *format, va_list *args, char flag, int flagpos)
{
	char arg;

	if (flag != 'c')
		return (0);
	arg = va_arg(*args, int);
	printf("Print = %c\n", arg);
	if (write(1, &arg, 1) == -1)
		return (-1);
	format += 2;
	return (flagpos);
}
