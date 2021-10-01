/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cemenjiv <cemenjiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 19:38:17 by cemenjiv          #+#    #+#             */
/*   Updated: 2021/10/01 11:52:51 by cemenjiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>


void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*p_dest;
	char	*p_src;

	p_dest = dest;
	p_src = (char *)src;
	if (p_src < p_dest)
		while (n--)
			p_dest[n] = p_src[n];
	else
		memcpy(dest, src, n);
	return (dest);
}
