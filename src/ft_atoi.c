/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 17:51:45 by rfelicio          #+#    #+#             */
/*   Updated: 2021/07/30 19:28:46 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isspace(const char c)
{
	return (c == 0x20 || (c >= 0x09 && c <= 0x0d));
}

int	ft_atoi(const char *str)
{
	int	res;
	int	sgn;

	res = 0;
	sgn = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sgn *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return (sgn * res);
}
