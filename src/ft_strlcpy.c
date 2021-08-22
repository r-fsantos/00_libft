/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 10:01:10 by rfelicio          #+#    #+#             */
/*   Updated: 2021/08/06 16:44:17 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** COMMENTS: strlcpy its by definition less prone to errors than strncpy.
** However, call the function correctly its part of the caller responsability,
** meaning:
**
**		- dstsize should include size for the NULL char.
**
** Taking this assumption as full-filled, implement the function behaviour 
** becames quite simple.
**
** BEHAVIOUR: Copy all chars from src to dst, not including the NULL char pre-
** sent in the dstsize (len + '\0'). NULL char should be included after the
** process of copy is terminated.
**
** RETURN VALUES: (size_t) ft_strlen(src)
*/

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (!dst || !src)
		return (0);
	if (!dstsize)
		return (ft_strlen(src));
	i = 0;
	while (src[i] != '\0' && i < (dstsize - 1))
	{
		dst[i] = src[i];
		++i;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
