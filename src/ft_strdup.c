/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 21:27:22 by rfelicio          #+#    #+#             */
/*   Updated: 2021/08/22 15:25:42 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Alternative version using calloc
**	size_t	i;
**	char	*str;
**
**	i = 0;
**	if (s1 == NULL)
**		return (NULL);
**	str = (char *)ft_calloc((ft_strlen(s1) + 1), sizeof(*str));
**	if (str == NULL)
**		return (NULL);
**	while (s1[i] != '\0')
**	{
**		str[i] = s1[i];
**		++i;
**	}
**	return (str);
*/
char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	len;
	char	*str;

	i = 0;
	len = 0;
	if (!s1)
		return (NULL);
	while (s1[len] != '\0')
		len++;
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = s1[i];
		i++;
	}
	str[len] = '\0';
	return (str);
}
