/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 15:04:26 by hmontoya          #+#    #+#             */
/*   Updated: 2023/07/01 15:16:37 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

char *ft_set_u(char *format, va_list *args, char flag, int flagpos)
 {
     t_formater fmt;
     char *addition;
     unsigned int tmp;

     if (flag != 'u')
         return (format);
     fmt.format = format;
     printf("+ Format u: %s\n", format);
     tmp = va_arg(*args, unsigned int);
     addition = ft_itoa(tmp);
     fmt.addlen = ft_strlen(addition);
     printf("+ Format len to fill: %d\n", fmt.fmtlen);
     printf("+ Addition: %s (%d)\n", addition, fmt.addlen);
     ft_fill_format(&fmt, addition, flagpos);
     printf("+ Filled Result:%s\n", fmt.result);
     return (fmt.result);
 }
