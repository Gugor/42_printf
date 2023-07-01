/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_format.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 15:43:49 by hmontoya          #+#    #+#             */
/*   Updated: 2023/07/01 14:56:00 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	ft_check_state(void *check)
{
	if(!check)
	{
		g_state = -1;
		return (0);
	}
	return (1);
}

char	*ft_fill_format(t_formater *fmt, char *addition, int flagpos)
{
	/*
	char *result;
	char *pref;
	char *format = fmt->format;
	char *suf;
	int preflen;
	int fmtlen = ft_strlen(format);
	int addlen = fmt->addlen;
	int suflen;
	
	pref = ft_substr(format, 0, flagpos);
	printf("++ Prefix = %s\n", pref);
    if (!ft_check_state(pref))
        return (NULL);
	printf("++ In Fill format: %s\n", format);
	suf = ft_substr(format, flagpos + 2, fmtlen + addlen - flagpos + 2); 
	suflen = ft_strlen(suf);
	printf("++ Reminder: %s/\n", suf);
    if (!ft_check_state(suf))
        return (NULL);
	result = ft_calloc(fmtlen - 2 + addlen + 1, sizeof(char));
	if (!ft_check_state(result))
		return (NULL);
    ft_strlcpy(result, pref, flagpos + 1);
    ft_strlcat(result, addition, flagpos + addlen + 1);
	printf("++ 1.Reminder After 1st cat:\n++>> %s\n++>>1st result: %s\n", suf, result);
    ft_strlcat(result, suf, flagpos + addlen + suflen + 1);
	printf("++ 2.Reminder After 2st cat:\n++>> %s\n++>>2nd result: %s\n", suf, result);
    if (pref)
        free(pref);
	if(suf)
        free(suf);
	printf("++ memory freeied");
	fmt->result = result;
	return (result);
	*/
	fmt->fmtlen = ft_strlen(fmt->format);
	fmt->pref = ft_substr(fmt->format, 0, flagpos);
    if (!ft_check_state(fmt->pref))
        return (NULL);
	printf("==In Fill format: %s\n", fmt->format);
	fmt->suf = ft_substr(fmt->format, flagpos + 2, fmt->fmtlen + fmt->addlen - flagpos + 2); 
	printf("==Reminder: %s/\n", fmt->suf);
    if (!ft_check_state(fmt->suf))
        return (NULL);
	fmt->result = ft_calloc(fmt->fmtlen - 2 + fmt->addlen + 1, sizeof(char));
	if (!ft_check_state(fmt->result))
		return (NULL);
    ft_strlcpy(fmt->result, fmt->pref, flagpos + 1);
    ft_strlcat(fmt->result, addition, flagpos + fmt->addlen + 1);
	printf("== 1.Reminder After 1st cat:\n==>> %s\n==>>1st result: %s\n", fmt->suf, fmt->result);
    ft_strlcat(fmt->result, fmt->suf, flagpos + fmt->addlen + ft_strlen(fmt->suf) + 1);
	printf("== 2.Reminder After 2st cat:\n==>> %s\n==>>2nd result: %s\n", fmt->suf, fmt->result);
    if (fmt->pref)
        free(fmt->pref);
	if(fmt->suf)
        free(fmt->suf);
	printf("== Memory freeied\n");
	return (fmt->result);
}
