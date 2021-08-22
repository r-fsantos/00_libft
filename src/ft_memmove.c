/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 14:47:40 by rfelicio          #+#    #+#             */
/*   Updated: 2021/08/11 19:15:42 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dststart;
	unsigned char	*srcstart;

	if (!dst && !src)
		return (NULL);
	dststart = (unsigned char *)dst;
	srcstart = (unsigned char *)src;
	if (dststart <= srcstart)
		ft_memcpy(dststart, srcstart, len);
	else
	{
		while (len--)
			*(dststart + len) = *(srcstart + len);
	}
	return (dst);
}
