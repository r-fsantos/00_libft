/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 16:40:32 by rfelicio          #+#    #+#             */
/*   Updated: 2021/08/04 21:48:39 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_get_digitcount(int n)
{
	if ((n / 10) == 0)
		return (1);
	else
		return (ft_get_digitcount(n / 10) + 1);
}

char	*ft_itoa(int n)
{
	unsigned int	nb;
	size_t			len;
	char			*str;

	nb = (unsigned int)n;
	len = ft_get_digitcount(n);
	if (n < 0)
	{
		nb = -(unsigned int)n;
		++len;
	}
	str = (char *)ft_calloc((len + 1), sizeof(char));
	if (!str)
		return (NULL);
	while (len--)
	{
		str[len] = nb % 10 + '0';
		nb /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
