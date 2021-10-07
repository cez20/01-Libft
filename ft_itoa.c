/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cemenjiv <cemenjiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 15:56:42 by cemenjiv          #+#    #+#             */
/*   Updated: 2021/10/07 16:26:12 by cemenjiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	nb_length(long long n)
{
	unsigned int	length;

	length = 0;
	if (n < 0)
	{
		n = -n;
		length++;
	}
	while (n >= 10)
	{
		n = n / 10;
		length++;
	}
	length++;
	return (length);
}

char	*ft_itoa(int n)
{
	char			*str;
	long long		nb;
	unsigned int	i;
	unsigned int	size;

	nb = (long long)n;
	size = nb_length(nb);
	i = 0;
	str = (char *)malloc((size) * sizeof(*str));
	if (!str)
		return (NULL);
	if (nb < 0)
	{
		str[i] = '-';
		nb = -nb;
	}
	i = size - 1;
	while (nb >= 10)
	{
		str[i--] = (nb % 10 + 48);
		nb = nb / 10;
	}
	str[i] = (char)(nb % 10 + 48);
	str[size] = '\0';
	return (str);
}
