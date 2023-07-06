/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gethex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 15:44:26 by hmontoya          #+#    #+#             */
/*   Updated: 2023/07/06 17:27:03 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int ft_count_hex(unsigned long num)
{
	unsigned long count;

	count = 0;
	while (num > 0 && count < 12)
	{
		num /= 16;
		count++;
	}
	return (count);
} 

char *ft_gethex(unsigned long num)
{
	char *hex;
	char *set;
	unsigned long result;
	int  count;
	int module;

	set = "0123456789abcdef";
	result = num;
	module = 0;
	count = ft_count_hex(result);	
	hex = ft_calloc(count, sizeof(char *));
	if (!hex)
		return (NULL);
	while (--count >= 0)
	{
		module = result % 16;
		result /= 16;
		*(hex + count) = *(set + module);
	}
	return (hex);
}

