/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_print.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 17:30:53 by hmontoya          #+#    #+#             */
/*   Updated: 2023/07/06 18:33:01 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_putstr_print(char *str)
{
	int i;
	int err;

	i = 0;
	while (str[i])
	{
		err = write(1,&str[i],1);
		if (err == - 1)
		{
			return (err);
		}
		i++;
	}
	return (i);
}
