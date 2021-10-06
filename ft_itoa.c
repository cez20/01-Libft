/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cemenjiv <cemenjiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 15:56:42 by cemenjiv          #+#    #+#             */
/*   Updated: 2021/10/06 14:11:18 by cemenjiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nb_length(int n)
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
	return (length + 1);
}

char	*ft_itoa(int n)
{
	char			*ptr;
	unsigned int	size;
	unsigned int	i;

	size = nb_length(n);
	i = 0;
	ptr = (char *)malloc((size) * sizeof(ptr));
	if (!ptr)
		return (NULL);
	if (n < 0)
	{
		ptr[i++] = '-';
		n = -n;
	}
	i = size - 1;
	while (n >= 10)
	{
		ptr[i--] = (n % 10 + 48);
		n = n / 10;
	}
	ptr[i] = (char)(n % 10 + 48);
	ptr[size] = '\0';
	return (ptr);
}
