/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_xx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 17:34:35 by hmontoya          #+#    #+#             */
/*   Updated: 2023/07/01 17:50:44 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static char *ft_hex_toupper(char *hex)
{
	while (*hex) 
	{
		if (*hex >= 'a' && *hex <= 'z')
			*hex = ft_toupper(*hex);
		printf("%c",*hex);
		hex++;
	}
	printf("\n");
	return (hex);

}

char *ft_set_xx(char *format, va_list *args, char flag, int flagpos)
{
     t_formater fmt;
     char *addition;
     int tmp;

     if (flag != 'X')
         return (format);
     fmt.format = format;
     printf("+ Format x: %s\n", format);
     tmp = va_arg(*args, int);
	 printf("Arg: i=%i\n",tmp);
     addition = ft_gethex(tmp);
     if (!addition)
     {
         g_state = - 1;
         return (NULL);
     }
	 addition = ft_hex_toupper(addition);
     fmt.addlen = ft_strlen(addition);
     printf("+ Format len to fill: %d\n", fmt.fmtlen);
     printf("+ Addition: %s (%d)\n", addition, fmt.addlen);
     ft_fill_format(&fmt, addition, flagpos);
     printf("+ Filled Result:%s\n", fmt.result);
     return (fmt.result);
 }
