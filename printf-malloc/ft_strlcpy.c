/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmontoya <hmontoya@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 18:29:32 by hmontoya          #+#    #+#             */
/*   Updated: 2023/06/14 19:38:34 by hmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (dstsize <= 0)
		return (src_len);
	while (i < src_len)
	{
		if (i < dstsize - 1)
			dst[i] = (char)src[i];
		i++;
	}
	if (src_len >= dstsize)
		dst[dstsize - 1] = '\0';
	else
		dst[i] = '\0';
	return (src_len);
}
