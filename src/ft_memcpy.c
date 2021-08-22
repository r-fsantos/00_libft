/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 20:30:57 by rfelicio          #+#    #+#             */
/*   Updated: 2021/08/04 20:21:29 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION: Copy memory area. This function does not cover the case of
** overlaping between src and dst. ft_memmove should be used in this case. 
**
** BEHAVIOUR: Copies n bytes from src to dst memory area. Type Casting is
** needed because void values can not be assigned.
**
** RETURN VALUES: (void) dst (Original value)
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	while (n--)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		++i;
	}
	return (dst);
}
