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

int ft_set_u(va_list args, char flag)
 {
     char *arg;
     unsigned int tmp;
	 int i;

     if (flag != 'u')
         return (0);
	 i = 0;
     tmp = va_arg(args, unsigned int);
     arg = ft_itoa(tmp);
	 while (*(arg + i))
	 {
		 if (write(1, arg + i, 1) == -1)
			 return (- 1);
		i++;
	 }
	 if (arg)
		 free(arg);
     return (i - 1);
 }
