/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdos-rei <fdos-rei@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 18:17:31 by fdos-rei          #+#    #+#             */
/*   Updated: 2021/09/16 18:17:31 by fdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const	char *src, size_t dstsize)
{
	size_t	i;
	size_t	x;

	i = 0;
	x = 0;
	while (dst[i] && i < dstsize)
		i++;
	while (src[x] && (i + x + 1) < dstsize)
	{
		dst[i + x] = src[x];
		x++;
	}
	if (i < dstsize)
		dst[i + x] = '\0';
	return (i + ft_strlen(src));
}
