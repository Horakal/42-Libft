/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdos-rei <fdos-rei@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 18:17:31 by fdos-rei          #+#    #+#             */
/*   Updated: 2021/09/16 18:17:31 by fdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*str;
	char	*pointer;
	int		len;

	len = 0;
	while (src[len])
		len++;
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	pointer = str;
	while (*src)
		*pointer++ = *src++;
	*pointer = '\0';
	return (str);
}
