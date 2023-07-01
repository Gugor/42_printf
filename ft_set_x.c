/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 17:20:54 by hmontoya          #+#    #+#             */
/*   Updated: 2023/07/01 17:30:23 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

char *ft_set_x(char *format, va_list *args, char flag, int flagpos)
{
     t_formater fmt;
     char *addition;
     int tmp;

     if (flag != 'x')
         return (format);
     fmt.format = format;
     printf("+ Format x: %s\n", format);
     tmp = va_arg(*args, int);
     addition = ft_gethex(tmp);
	 if (!addition)
	 {
		 g_state = - 1;
		 return (NULL);
	 }
     fmt.addlen = ft_strlen(addition);
     printf("+ Format len to fill: %d\n", fmt.fmtlen);
     printf("+ Addition: %s (%d)\n", addition, fmt.addlen);
     ft_fill_format(&fmt, addition, flagpos);
     printf("+ Filled Result:%s\n", fmt.result);
     return (fmt.result);
 }
