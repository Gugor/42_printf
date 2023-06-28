/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 18:31:06 by hmontoya          #+#    #+#             */
/*   Updated: 2023/06/28 18:45:47 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

char *ft_set_s(char *format, va_list *args, char flag, char *flagpos)
{
	t_formater formater;
	int lengthtoflag;
	char *addition;

	if (flag != 's')
		return (format);
	formater.format = format;
	lengthtoflag = flagpos - format;
	formater.formatlen = ft_strlen(format);
	addition = va_arg(*args, char *);
	formater.additionlen = ft_strlen(addition);
	ft_fill_format(&formater, addition, lengthtoflag);
    return (formater.result);
}
