/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_c.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 17:36:56 by hmontoya          #+#    #+#             */
/*   Updated: 2023/06/27 18:47:44 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

char *ft_set_c(char *format, va_list *args, char *flagpos)
{
	t_formater formater;
	int lengthtoflag;

	lengthtoflag = flagpos - format;
	formater.formatlen = ft_strlen(format);
	formater.addition = va_arg(*args, char *);
	printf("Addition: %s\n",formater.addition);
	formater.previous = ft_substr(format, 0,lengthtoflag);
	if (!formater.previous)
	{
		g_malloc_state = -1;
		return (NULL);
	}
	printf("previous = %s\n", formater.previous);
	formater.reminder = ft_substr(format,lengthtoflag + 2,ft_strlen(format));
	if (!formater.reminder)
	{
		g_malloc_state = -1;
		return (NULL);
	}
	formater.result = ft_calloc(formater.formatlen - 2 + ft_strlen(formater.addition), sizeof(char));
	ft_strlcpy(formater.result, formater.previous, lengthtoflag + 1);
	ft_strlcat(formater.result, formater.addition, lengthtoflag + ft_strlen(formater.addition) + 1);
	ft_strlcat(formater.result, formater.reminder,formater.formatlen + ft_strlen(formater.addition));
	if (formater.result)
	{
		free(formater.previous);
		free(formater.reminder);
	}
	return (formater.result);
}
