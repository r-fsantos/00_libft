/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 19:49:36 by rfelicio          #+#    #+#             */
/*   Updated: 2021/08/04 21:39:55 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION: fill a byte string with a byte value
**
** BEHAVIOUR: Writes len bytes of value c (converted to an unsigned char) 
** to the string b.
**
** RETURN VALUES: (void) b
*/

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	while (len--)
		*ptr++ = (unsigned char)c;
	return (b);
}
