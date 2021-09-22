/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cemenjiv <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 16:41:36 by cemenjiv          #+#    #+#             */
/*   Updated: 2021/09/20 18:03:12 by cemenjiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, void *src, size_t n)
{
	size_t i;
	unsigned char *p_dst;
	unsigned char *p_src;

	p_dst = dst;
	p_src = src;

	i = 0;
	while (i < n)
	{
		p_dst[i] = p_src[i];
		i++;
	}
	return (dst);
}

int main()
{

	char a[] = "Cesar1";
	char b[] = "Carlos";

//	memcpy(a, b, 3);
//	printf("%s\n%s\n", a ,b);
 	ft_memcpy(a, b, 3);
	printf("%s\n%s\n", a , b);
}
