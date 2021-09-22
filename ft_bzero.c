/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cemenjiv <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 15:52:14 by cemenjiv          #+#    #+#             */
/*   Updated: 2021/09/20 16:38:45 by cemenjiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t i;
	unsigned char *ptr;

	i = 0;
	ptr = s;

	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}

int  main()
{
	char a[] = "Cesar";

	printf("%s\n", a);
	ft_bzero(a, 0);
	printf("%s\n", a);
	printf("%s\n", a+3);
}

