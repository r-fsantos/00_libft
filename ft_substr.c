/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 19:38:05 by rfelicio          #+#    #+#             */
/*   Updated: 2021/08/08 22:12:17 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates and returns a substring from the char const *s.
** The main logic is to verify if it is possible to match the
** substring as it is described by the params start and len.
** In this function it is import to considerer cases in which:
**
**		1. The user make some mistakes like passing an start index
**		that points to an region outside from the char const *s;
**		RETURN VALUE: The only substr possible to be formed: "\0"
**		2. size_t len is bigger than ft_strlen(s) an start is correct.
**		In this case, the len should be redefined.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (!len || start > slen)
		return ((char *)ft_calloc(1, sizeof(char)));
	if (len > (slen - start))
		len = slen - start;
	str = (char *)ft_calloc((len + 1), sizeof(char));
	if (!str)
		return (NULL);
	return ((char *)ft_memmove((void *)str, (void *)(s + start), len));
}
