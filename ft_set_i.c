/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_i.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:58:23 by hmontoya          #+#    #+#             */
/*   Updated: 2023/07/09 18:53:10 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_set_i(va_list args, char flag)
 {
     char *arg;
     int tmp;
	 int i;

     if (flag != 'i')
         return (0);
     tmp = va_arg(args, int);
     arg = ft_itoa(tmp);
	 while (*(arg + i))
	 {
	 	if (write(1, arg + i, 1))
			return (-1);
		i++;
	 }
	 if (arg && tmp)
		 free(arg);
     return (i - 1);
 }
