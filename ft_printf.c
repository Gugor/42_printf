/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 13:22:36 by hmontoya          #+#    #+#             */
/*   Updated: 2023/06/28 18:47:13 by hmontoya         ###   ########.fr       */
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

char *ft_set_format(char *format, va_list *args)
{
	char *flagpos;
	char *tmp;
	char flag;

	tmp = format;
	flagpos = ft_strchr(format,'%');
	flag = *(flagpos + 1);
	printf("Flag = %c\n", flag);
	printf("Set flagpos %p\n", flagpos);
	tmp = ft_set_c(tmp, args, flag, flagpos);
	tmp = ft_set_s(tmp, args, flag, flagpos);
	tmp = ft_set_d(tmp, args, flag, flagpos);
	//tmp = ft_set_p(tmp, args, flagpos);
	//tmp = ft_set_i(tmp, args, flagpos);
	//tmp = ft_set_u(tmp, args, flagpos);
	//tmp = ft_set_x(tmp, args, flagpos);
	//tmp = ft_set_X(tmp, args, flagpos);
	return (tmp);
}

int  *ft_printf(const char *format, ...)
{
	char	*result;
	int		num_flags;
	int		i;
	va_list	args;

	result = (char *)format;
	va_start(args, format);
	num_flags = ft_num_flags(format);
	g_state = 0;
	i = 0;
	while (i < num_flags)
	{
		printf("Flag num %i\n", i);
		result = ft_set_format(result, &args);
		printf("format in iter %i: %s \n", i, result);
		if (g_state == -1 )
			return ((int *)-1);
		i++;
	} 	
	va_end(args);
	printf("%s",result);
	if (result)
		free(result);
	return (0);
}
/*
int main(void)
{
	ft_printf("hola %s %d %c %j %d", a,b,c,d);
}*/
