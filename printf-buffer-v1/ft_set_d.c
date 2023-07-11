/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 12:54:06 by hmontoya          #+#    #+#             */
/*   Updated: 2023/07/01 14:31:25 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

char *ft_set_d(char *format, va_list *args, char flag, int flagpos)
 {
	 t_formater fmt;
	 char *addition;
	 int tmp;

     if (flag != 'd')
         return (format);
	 fmt.format = format;
	 printf("+ Format d: %s\n", format);
     tmp = va_arg(*args, int);
	 addition = ft_itoa(tmp);
     fmt.addlen = ft_strlen(addition);
	 printf("+ Format len to fill: %d\n", fmt.fmtlen);
	 printf("+ Addition: %s (%d)\n", addition, fmt.addlen);
     ft_fill_format(&fmt, addition, flagpos);
	 printf("+ Filled Result:%s\n", fmt.result);
     return (fmt.result);
 }