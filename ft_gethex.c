/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gethex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 15:44:26 by hmontoya          #+#    #+#             */
/*   Updated: 2023/07/01 20:18:23 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static  unsigned int ft_count_hex(unsigned int num)
{
	unsigned int count;

	count = 0;
	while (num > 0)
	{
		num /= 16;
		printf("Count %i num %i ",count, num);
		count++;
	}
	return (count);
} 

char *ft_gethex(unsigned int num)
{
	char *hex;
	char *set;
	unsigned int result;
	unsigned int count;
	int module;

	set = "0123456789abcdef";
	result = num;
	module = 0;
	count = ft_count_hex(result);	
	hex = ft_calloc(count, sizeof(char *));
	if (!hex)
		return (NULL);
	printf("++++ Hexa source: %i\n", result);
	while (--count >= 0)
	{
		module = result % 16;
		result /= 16;
		*(hex + count) = *(set + module);
		printf("%i.Result %d\n>>char = %c\n", count, module, *(hex + count));
	}
	printf("++++ Get Hexa (%s)\n", hex);
	return (hex);
}

