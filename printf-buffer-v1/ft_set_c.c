/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_c.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 17:36:56 by hmontoya          #+#    #+#             */
/*   Updated: 2023/06/29 17:47:34 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

char *ft_set_c(char *format, va_list *args, char flag, int flagpos)
{
	t_formater fmt;
	char *addition;
	char tmp;

	if (flag != 'c')
		return (format);
	fmt.format = format;
	fmt.fmtlen = ft_strlen(format);
	tmp = va_arg(*args, int);
	addition = &tmp;
	fmt.addlen = 1;
	ft_fill_format(&fmt, addition, flagpos);
	return (fmt.result);
}
