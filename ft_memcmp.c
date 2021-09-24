/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cemenjiv <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 10:42:05 by cemenjiv          #+#    #+#             */
/*   Updated: 2021/09/23 14:11:39 by cemenjiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	unsigned char *ptr1;
	unsigned char *ptr2;

	i = 0;
	ptr1 = (unsigned char*)s1;
	ptr2 = (unsigned char*)s2;
	if (n == 0)
		return (0);
	while (ptr1[i] == ptr2[i] && i < n ) 
		i++;	
	if (ptr1[i] != ptr2[i])
			return (*(unsigned char*)&s1[i] - *(unsigned char*)&s2[i]);
	else
		return (0);
}

int main()
{
	char a[] = "Ceaar";
	char b[] = "Cesar";

	printf("%d\n", memcmp(a, b, 5)); 
	printf("%d\n", ft_memcmp(a, b, 5)); 
}
