/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_c.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 17:36:56 by hmontoya          #+#    #+#             */
/*   Updated: 2023/06/28 18:45:51 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

char *ft_set_c(char *format, va_list *args, char flag, char *flagpos)
{
	t_formater formater;
	int lengthtoflag;
	char addition;

	if (flag != 'c')
		return (format);
	formater.format = format;
	lengthtoflag = flagpos - format;
	formater.formatlen = ft_strlen(format);
	addition = va_arg(*args, int);
	formater.additionlen = 1;
	ft_fill_format(&formater, &addition, lengthtoflag);
	return (formater.result);
}
