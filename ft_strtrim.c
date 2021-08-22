/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 13:18:14 by rfelicio          #+#    #+#             */
/*   Updated: 2021/08/02 16:33:36 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	s1len;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	s1len = ft_strlen(s1);
	while (s1[start] && (ft_strchr(set, s1[start])))
		++start;
	while (s1len && (ft_strchr(set, s1[s1len])))
		--s1len;
	return (ft_substr(s1, start, s1len - start + 1));
}
