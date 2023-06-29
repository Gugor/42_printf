/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 18:31:06 by hmontoya          #+#    #+#             */
/*   Updated: 2023/06/29 17:40:54 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

char *ft_set_s(char *format, va_list *args, char flag, int flagpos)
{
	t_formater fmt;
	char *addition;

	if (flag != 's')
		return (format);
	fmt.format = format;	
	fmt.fmtlen = ft_strlen(format);
	addition = va_arg(*args, char *);
	fmt.addlen = ft_strlen(addition);
	printf("Addition %s set.", addition);
	ft_fill_format(&fmt, addition, flagpos);
    return (fmt.result);
}
