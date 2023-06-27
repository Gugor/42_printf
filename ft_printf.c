/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 13:22:36 by hmontoya          #+#    #+#             */
/*   Updated: 2023/06/27 18:17:54 by hmontoya         ###   ########.fr       */
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

//t_formater ft_format(t_formater formater, const char *format, int flagpos)

char *ft_set_format(char *format, va_list *args)
{
	static char *flagpos; // It seems a better idea to transform it to int. To be able to iterate over it or pass it to substr.
	char *tmp;
	char *flag;

	flagpos = (char *)format;
	tmp = (char *)format;
	flag = (char *)flagpos;
	flagpos = ft_strchr(format,'%');
	tmp = ft_set_c((char *)format, args, flagpos);
	//tmp = ft_set_s((char *)format, *args, fpos);
	//tmp = ft_set_d(format, (double)arg, fpos);
	//tmp = ft_set_p(format, (int)arg, fpos);
	//tmp = ft_set_i(format, (int)arg, fpos);
	//tmp = ft_set_u(format, (unsigned int)arg, fpos);
	//tmp = ft_set_x(format, (int)arg, fpos);
	//tmp = ft_set_X(format, (int)arg, fpos);
	return (tmp);
}

int  *ft_printf(const char *format, ...)
{
	char	*result;
	int		num_flags;
	int		i;
	va_list	args;
	// Verify if num of arguments passed and num of placeholders set matches.
	result = (char *)format;
	va_start(args, format);
	num_flags = ft_num_flags(format);
	if (num_flags == 0)
		return (0);
	i = 0;
	while (i < num_flags)
	{
		result = ft_set_format(result, &args);
		if (g_malloc_state == -1)
			return ((int *)-1);
		i++;
	} 	
	va_end(args);
	printf("%s\n",result);
	//print result
	if (g_write_state == -1)
		return ((int *)-1);
	return (0);
}
/*
int main(void)
{
	ft_printf("hola %s %d %c %j %d", a,b,c,d);
}*/
