/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_per.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 17:49:41 by hmontoya          #+#    #+#             */
/*   Updated: 2023/07/06 17:55:49 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

char *ft_set_per(char *format, va_list *args, char flag, int flagpos)
{
	t_formater fmt;
	char *addition;

   	if (flag != '%')
  		return (format);
	fmt.format = format;
  	addition = "%";
 	fmt.addlen = 1;
	ft_fill_format(&fmt, addition, flagpos);
	return (fmt.result);
}
