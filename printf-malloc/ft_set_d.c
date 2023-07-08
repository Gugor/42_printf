/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 12:54:06 by hmontoya          #+#    #+#             */
/*   Updated: 2023/07/08 18:05:24 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char *ft_set_d(char *format, va_list *args, char flag, int flagpos)
 {
	 t_formater fmt;
	 char *addition;
	 int tmp;

     if (flag != 'd')
         return (format);
	 fmt.format = format;
     tmp = va_arg(*args, int);
	 addition = ft_itoa(tmp);
     fmt.addlen = ft_strlen(addition);
     ft_fill_format(&fmt, addition, flagpos);
     return (fmt.result);
 }
