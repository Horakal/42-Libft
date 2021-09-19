/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdos-rei <fdos-rei@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 18:17:31 by fdos-rei          #+#    #+#             */
/*   Updated: 2021/09/16 18:17:31 by fdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	number_words(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			while (*s && *s != c)
				s++;
			i++;
		}
	}
	return (i);
}

static char	*get_word(const char *s, int initial, int last)
{
	char	*split_word;
	size_t	i;

	i = 0;
	split_word = malloc((last - initial + 1) * sizeof(char));
	while (initial < last)
		split_word[i++] = s[initial++];
	split_word[i] = '\0';
	return (split_word);
}

char	**ft_split(char const *s, char c)
{
	char	**split_string;
	size_t	row;
	size_t	col;
	int		index;

	split_string = (char **)malloc((number_words(s, c) + 1) * sizeof(char *));
	if (split_string == NULL)
		return (NULL);
	index = -1;
	col = 0;
	row = 0;
	while (col <= ft_strlen(s))
	{
		if (s[col] != c && index < 0)
			index = col;
		else if ((s[col] == c || col == ft_strlen(s)) && (index >= 0))
		{
			split_string[row++] = get_word(s, index, col);
			index = -1;
		}
		col++;
	}
	split_string[row] = 0;
	return (split_string);
}
