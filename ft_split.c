/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cemenjiv <cemenjiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:33:47 by cemenjiv          #+#    #+#             */
/*   Updated: 2021/10/10 20:15:41 by cemenjiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int str_length(char const *s, char c)
{
	int	length;
	int	i;
	int	j;

	length = 0;
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			while (s[i + j] != c && s[i + j] != '\0')
			{
				j++;
				length++;
			}
			i = i + (j - 1);
			j = 0;
		}
		i++;
	}
	return (length);
}

char	*ft_split(char const *s, char c)
{
	char 	*str;
	int		size;
	int 	i;
	int 	j;
	
	size = str_length(s, c);
	str  = malloc((size + 1) * sizeof(*str));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if(s[i] != c)
		{
			while (s[i] != c && s[i])
				str[j++] = s[i++];
			i -= 1;
		}
		i++;	
	}
	str[j] = '\0';
	return (str);
}

int main()
{
	char a[] = "Cesar...Cesar.?.?.Cesar";
	char c = '.';

	printf("%s\n", ft_split(a, c));
}