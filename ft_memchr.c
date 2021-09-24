/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cemenjiv <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 15:57:58 by cemenjiv          #+#    #+#             */
/*   Updated: 2021/09/23 13:44:38 by cemenjiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	unsigned char *ptr;

	i = 0;
	ptr = (unsigned char*)s;	
	while (ptr[i] != '\0' && i <= n) 
	{
		if (ptr[i] == c)
			return ((unsigned char*)&s[i]);
		i++;
	}
	return (NULL);
}

int main()
{
	char a[] = "Cesar";

	printf("%s\n", memchr(a, 'e', 3)); 
	printf("%s\n", ft_memchr(a, 'e', 3)); 
}
