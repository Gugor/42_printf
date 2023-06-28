/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_format.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 15:43:49 by hmontoya          #+#    #+#             */
/*   Updated: 2023/06/28 18:26:34 by hmontoya         ###   ########.fr       */
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

char	*ft_fill_format(t_formater *formater, char *addition, int lengthtoflag)
{
    formater->previous = ft_substr(formater->format, 0, lengthtoflag);
    if (!ft_check_state(formater->previous))
        return (NULL);
    formater->reminder = ft_substr(formater->format, lengthtoflag + 2, ft_strlen(formater->format));
    if (!ft_check_state(formater->reminder))
        return (NULL);
    formater->result = ft_calloc(formater->formatlen - 2 + 1, sizeof(char));
	if (!ft_check_state(formater->result))
		return (NULL);
    ft_strlcpy(formater->result, formater->previous, lengthtoflag + 1);
    ft_strlcat(formater->result, addition, lengthtoflag + formater->additionlen + 1);
    ft_strlcat(formater->result, formater->reminder, formater->formatlen + 1);
    if (formater->result)
    {
        free(formater->previous);
        free(formater->reminder);
    }
	return (formater->result);
}
