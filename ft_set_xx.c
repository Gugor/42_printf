/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_xx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 17:34:35 by hmontoya          #+#    #+#             */
/*   Updated: 2023/07/06 17:24:32 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static char *ft_hex_toupper(char *hex)
{
	while (*hex) 
	{
		if (*hex >= 'a' && *hex <= 'z')
			*hex = ft_toupper(*hex);
		hex++;
	}
	return (hex);

}

char *ft_set_xx(char *format, va_list *args, char flag, int flagpos)
{
     t_formater fmt;
     char *addition;
     unsigned int tmp;

     if (flag != 'X')
         return (format);
     fmt.format = format;
     tmp = va_arg(*args, unsigned int);
     addition = ft_gethex(tmp);
     if (!addition)
     {
         g_state = - 1;
         return (NULL);
     }
	 addition = ft_hex_toupper(addition);
     fmt.addlen = ft_strlen(addition);
     ft_fill_format(&fmt, addition, flagpos);
     return (fmt.result);
 }
