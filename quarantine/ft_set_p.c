/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 15:18:35 by hmontoya          #+#    #+#             */
/*   Updated: 2023/07/08 18:06:20 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char *ft_build_p_address(unsigned long num)
{
	char *hex;
	char *address;

	hex = ft_gethex(num);
	if (!hex)
		return (NULL);
	address = ft_strjoin("0x", hex);
	if (!address)
	{
		g_state = - 1;
		return (NULL);
	}
	return (address);
}

char *ft_set_p(char *format, va_list *args, char flag, int flagpos)
{
     t_formater fmt;
     char *addition;
     unsigned long tmp;

     if (flag != 'p')
         return (format);
     fmt.format = format;
     tmp = va_arg(*args, unsigned long);
     addition = ft_build_p_address(tmp);
     fmt.addlen = ft_strlen(addition);
     ft_fill_format(&fmt, addition, flagpos);
	 if (addition)
		 free(addition);
     return (fmt.result);
 }
