/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdos-rei <fdos-rei@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 18:17:31 by fdos-rei          #+#    #+#             */
/*   Updated: 2021/09/16 18:17:31 by fdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst,	const void *src, size_t	len)
{
	void	*temp;

	temp = dst;
	if (dst > src)
	{
		while (len-- > 0)
			*(unsigned char *)(dst + len) = *(unsigned char *)(src + len);
	}
	else if (dst < src)
	{
		while (len-- > 0)
			*(unsigned char *)dst++ = *(unsigned char *)src++;
	}
	return (temp);
}
