/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 15:04:26 by hmontoya          #+#    #+#             */
/*   Updated: 2023/07/08 18:08:29 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char *ft_set_u(char *format, va_list *args, char flag, int flagpos)
 {
     t_formater fmt;
     char *addition;
     unsigned int tmp;

     if (flag != 'u')
         return (format);
     fmt.format = format;
     tmp = va_arg(*args, unsigned int);
     addition = ft_itoa(tmp);
     fmt.addlen = ft_strlen(addition);
     ft_fill_format(&fmt, addition, flagpos);
	 if (addition)
		 free(addition);
     return (fmt.result);
 }
