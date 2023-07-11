/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 17:20:54 by hmontoya          #+#    #+#             */
/*   Updated: 2023/07/08 18:43:12 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char *ft_set_x(char *format, va_list *args, char flag, int flagpos)
{
     t_formater fmt;
     char *addition;
     unsigned int tmp;
	 char *result;

     if (flag != 'x')
         return (format);
     fmt.format = format;
     tmp = va_arg(*args, unsigned int);
     addition = ft_gethex(tmp);
	 if (!addition)
	 {
		 g_state = - 1;
		 return (NULL);
	 }
     fmt.addlen = ft_strlen(addition);
     ft_fill_format(&fmt, addition, flagpos);
	 if (addition)
		 free(addition);
	 result = ft_strdup(fmt.result);
	 if (!result)
	 {
		g_state = - 1;
		return (NULL);		
	 }
	 if (fmt.result)
		 free(fmt.result);
     return (result);
 }