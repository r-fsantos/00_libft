/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 15:51:25 by rfelicio          #+#    #+#             */
/*   Updated: 2021/07/30 16:36:42 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needlelen;

	needlelen = ft_strlen(needle);
	if (!needlelen)
		return ((char *)haystack);
	while (len >= needlelen && *haystack != '\0')
	{
		if (ft_strncmp(haystack, needle, needlelen) == 0)
			return ((char *)haystack);
		++haystack;
		--len;
	}
	return (NULL);
}
