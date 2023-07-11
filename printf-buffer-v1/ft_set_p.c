/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 15:18:35 by hmontoya          #+#    #+#             */
/*   Updated: 2023/07/01 20:11:25 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static char *ft_build_p_address(int num)
{
	char *hex;
	char *address;

	hex = ft_gethex(num);
	printf("+++ Hex %s (num=%i)\n", hex, num);
	if (!hex)
		return (NULL);
	printf("+++ 2Hex %s\n", hex);
	address = ft_strjoin("0x", hex);
	printf("+++ Address %s\n", address);
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
     int tmp;

     if (flag != 'p')
         return (format);
     fmt.format = format;
     printf("+ Format p: %s\n", format);
     tmp = va_arg(*args, int);
	 printf("+ Address = %i\n", tmp);
     addition = ft_build_p_address(tmp);
     fmt.addlen = ft_strlen(addition);
     printf("+ Format len to fill: %d\n", fmt.fmtlen);
     printf("+ Addition: %s (%d)\n", addition, fmt.addlen);
     ft_fill_format(&fmt, addition, flagpos);
     printf("+ Filled Result:%s\n", fmt.result);
     return (fmt.result);
	 }
