/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cemenjiv <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 14:26:04 by cemenjiv          #+#    #+#             */
/*   Updated: 2021/09/23 10:32:42 by cemenjiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *ptr;

	ptr = (unsigned char*)b;	
	while (len > 0)
	{
		*ptr++ = (unsigned char)c;
		len--;
	}
	return (b);
}

int main()
{
	char a[50] = "Cesar";

		
	printf("%s\n", ft_memset(a ,'!', 3)); 
//	printf("%s\n", memset(a ,'$', 3)); 
}
