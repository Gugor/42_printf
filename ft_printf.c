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

int ft_num_formats(const char *format)
{
	char *set;
	int count;
	int len;

	set = "csdpiuxX";
	count = 0;
	len = ft_strlen(format) - 1;
	while (ft_strchr("%", format[len]) && ft_strchr(set, format[len + 1]) && len >= 0)
		len++;		
	return (len);
}

char *ft_vprintf(va_list args, char *format)
{
	//Cuantos %+algo existen en la str de formato
	//Cuadran o no con el numero de argumentos ??	
	int formats = ft_num_formats(format);
	printf("%i\n",formats);
	return (NULL);
}

char *ft_printf(const char *format, ...)
{
	int num_args;
	va_list args;
	// Verify if num of arguments passed and num of placeholders set matches.
	va_start(args,(char *)format);
	ft_vprintf(args, (char *)format);
	va_end(args);
	return (NULL);
}

int main(void)
{
	ft_printf("%s");
}
