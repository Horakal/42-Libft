/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdos-rei <fdos-rei@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 18:17:31 by fdos-rei          #+#    #+#             */
/*   Updated: 2021/09/16 18:17:31 by fdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	s1_index;
	size_t	s2_index;

	s1_index = 0;
	s2_index = 0;
	if (!s1 || !s2)
		return (0);
	new_str = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1));
	if (new_str == NULL)
		return (NULL);
	while (s1[s1_index] != '\0')
	{
		new_str[s1_index] = s1[s1_index];
		s1_index++;
	}
	while (s2[s2_index] != '\0')
	{
		new_str[s1_index] = s2[s2_index];
		s1_index++;
		s2_index++;
	}
	new_str[s1_index] = '\0';
	return (new_str);
}
