/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_format.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 15:43:49 by hmontoya          #+#    #+#             */
/*   Updated: 2023/07/06 18:23:17 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
	fmt->fmtlen = ft_strlen(fmt->format);
	fmt->pref = ft_substr(fmt->format, 0, flagpos);
    if (!ft_check_state(fmt->pref))
        return (NULL);
	fmt->suf = ft_substr(fmt->format, flagpos + 2, fmt->fmtlen + fmt->addlen - flagpos + 2); 
    if (!ft_check_state(fmt->suf))
        return (NULL);
	fmt->result = ft_calloc(fmt->fmtlen - 2 + fmt->addlen + 1, sizeof(char));
	if (!ft_check_state(fmt->result))
		return (NULL);
    ft_strlcpy(fmt->result, fmt->pref, flagpos + 1);
    ft_strlcat(fmt->result, addition, flagpos + fmt->addlen + 1);
    ft_strlcat(fmt->result, fmt->suf, flagpos + fmt->addlen + ft_strlen(fmt->suf) + 1);
    if (fmt->pref)
        free(fmt->pref);
	if(fmt->suf)
        free(fmt->suf);
	return (fmt->result);
}
