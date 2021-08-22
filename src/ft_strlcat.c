/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 11:54:29 by rfelicio          #+#    #+#             */
/*   Updated: 2021/08/02 20:04:35 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** COMMENTS: strlcpy its by definition less prone to errors than strncpy.
** However, call the function correctly its part of the caller responsability,
** meaning:
**
**		- dstsize should include size for the NULL char,
**
**		- dstlen should be greter than dstsize. Otherwise implies that dst is
**		  incorrect or is not a proper string and TRUNCATION will occurs and
**
**		- src must fit into dst: ORIGINAL DSTLEN + SRCLEN < DSTSIZE - NULL
**
** Taking this assumption as full-filled, implement the function behaviour 
** becames quite simple.
**
** BEHAVIOUR: Appends the src to the end of dst, overwriting its NULL char.
** Append at most/max SCRLEN, not including the NULL char pre-
** sent in the dstsize (len + '\0'). NULL char should be included after the
** process of concatenation is terminated.
**
** RETURN VALUES: (size_t) ft_strlen(src) + dstsize (When trunction occurs)
**				  (size_t) ft_strlen(src) + ft_strlen(dst)
*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	i = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstsize <= dstlen)
		return (srclen + dstsize);
	while (src[i] != '\0' && (dstlen + i < (dstsize - 1)))
	{
		dst[dstlen + i] = src[i];
		++i;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}
