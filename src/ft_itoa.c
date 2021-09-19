/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdos-rei <fdos-rei@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 18:17:31 by fdos-rei          #+#    #+#             */
/*   Updated: 2021/09/16 18:17:31 by fdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n == -2147483648)
		return (10);
	if (n < 0)
		n = n * (-1);
	while (n >= 1)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t	len_int;
	char	*string_number;
	int		signal;
	long	num;

	len_int = num_len(n);
	num = n;
	signal = 0;
	if (n < 0)
	{
		num = -num;
		signal = 1;
	}
	string_number = malloc((len_int + 1 + signal) * sizeof(char));
	if (string_number == NULL)
		return (NULL);
	if (signal == 1)
		string_number[0] = '-';
	string_number[len_int + signal] = '\0';
	while (len_int-- > 0)
	{
		string_number[len_int + signal] = (num % 10) + 48;
		num /= 10;
	}
	return (string_number);
}
