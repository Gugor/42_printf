/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 13:22:36 by hmontoya          #+#    #+#             */
/*   Updated: 2023/06/22 19:00:28 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
size_t ft_strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);

}

int ft_is_strformat(const char first, const char second)
{
	char *set;

	set = "csdpiuxX";
	if (('%' == first) && ft_strchr(set, second))
		return (1);
	else
		return (0);
}

int ft_num_flags(const char *format)
{
	int count;
	int len;

	count = 0;
	len = ft_strlen(format) - 1;
	while (*(format + len))
	{
		if (ft_is_strformat(format[len], format[len + 1]) && len >= 0)
		{
			printf("current = %c next = %c (%i)\n", format[len], format[len + 1], len);
			count++;		
		}
		len--;
	}
	return (count);
}

char *ft_set_format(const char *format, args)
{
	return (NULL);
}

int *ft_vprintf(char *format, va_list args)
{
	//Cuantos %+algo existen en la str de formato
	//Cuadran o no con el numero de argumentos ??	
	int i;
	int num_formats;

	num_formats = ft_num_flags(format);
	while (i < num_formats)
	{
		ft_set_format(format, args);
		i++;
	} 	
	return (0);
}

int  *ft_printf(const char *format, ...)
{
	int num_args;
	va_list args;
	// Verify if num of arguments passed and num of placeholders set matches.
	va_start(args, format);
	ft_vprintf((char *)format, args);
	va_end(args);
	return (0);
}

int main(void)
{
	ft_printf("%s %d %c %j %d");
}
