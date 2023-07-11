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
     char			*arg;
	 unsigned int	result;
	 int			module;

     if (flag != 'x')
         return (0);
     arg = va_arg(*args, unsigned int);
     arg = ft_gethex(tmp);
	 if (!arg)
		 return (-1);
	 while (result > 0)
	 {
		 module = num % 16;
         result /= 16;
		if (write(1, module, 1) == -1)
			return (-1);
	 }
	 if (arg)
		 free(addition);
     return (i - 1);
 }
