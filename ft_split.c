/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 16:35:46 by rfelicio          #+#    #+#             */
/*   Updated: 2021/08/12 12:07:32 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Launched in case of error on srt assignment
** on the **arr. It frees all memory already
** allocated from the previous strings.
*/
static char	**ft_free(char **arr, int arrsize)
{
	int	i;

	i = 0;
	while (i < arrsize)
		free(arr[i++]);
	free(arr);
	return (NULL);
}

/*
** Gets the word number/strings that can be splitted
** away from the original char const *s, delimited by
** the char separator c. 
** It RETURNS the int word_nbr.
*/
static int	ft_getwords(char const *s, char c)
{
	int	i;
	int	is_word;
	int	word_nbr;

	i = 0;
	is_word = 0;
	word_nbr = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			is_word = 0;
		if (s[i] != c && !is_word)
		{
			is_word = 1;
			++word_nbr;
		}
		++i;
	}
	return (word_nbr);
}

/*
** Gets the wordlen/strlen from the char pointed
** by char const *s, ending with the char separator c
** It RETURNS the int i/word_len.
*/
static int	ft_getwordlen(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

/*
** It allocates and returns an array of strings (**split)
** obtained by splitting the char const *s using the
** character c as delimiter. The array must be endded by a
** NULL pointer.
*/
char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		words;
	char	**split;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	words = ft_getwords(s, c);
	split = (char **)ft_calloc((words + 1), sizeof(char *));
	if (!split)
		return (NULL);
	while (i < words)
	{
		while (s[j] == c && s[j] != '\0')
			j++;
		split[i] = ft_substr(&s[j], 0, ft_getwordlen(&s[j], c));
		if (!split[i])
			return (ft_free(split, i));
		j += ft_getwordlen(&s[j], c);
		i++;
	}
	return (split);
}
