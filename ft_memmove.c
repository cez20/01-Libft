/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cemenjiv <cemenjiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 19:38:17 by cemenjiv          #+#    #+#             */
/*   Updated: 2021/10/08 13:25:15 by cemenjiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dest1;
	char	*src1;

	dest1 = dest;
	src1 = (char *)src;
	if (src1 < dest1)
		while (n--)
			dest1[n] = src1[n];
	else
		memcpy(dest, src, n);
	return (dest);
}
