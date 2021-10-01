/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cemenjiv <cemenjiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 09:57:13 by cemenjiv          #+#    #+#             */
/*   Updated: 2021/10/01 12:42:24 by cemenjiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char ft_test(unsigned int i, char c)
{
	(void) i;
		return (c);
	
}
	
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *str;
	int i;
	
	i = 0;
	if (!s)
		return(NULL);
	str = strdup(s);
	if(!str)
		return (NULL);
	while(str[i])
	{
		str[i] = (*f)(i, s[i]);		
		i++;
	}
	return(str);
}

int main()
{
	char a[] = "Cez";

	printf("%s\n", ft_strmapi(a, &ft_test));
}