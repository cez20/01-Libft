/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cemenjiv <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 14:16:23 by cemenjiv          #+#    #+#             */
/*   Updated: 2021/09/23 16:04:57 by cemenjiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <xlocale.h>
#include <stdio.h>

const char	*ft_strnstr(const char *haystack,const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[i] == '\0')
	{
		return(haystack);
	}
	while (haystack[i] != '\0' && i < (len - 1))
	{		
		j = 0;
		if (haystack[i] == needle[j])
		{		
			while ((haystack[i + j] == needle[j]) && (i + j) <= (len - 1))
			{	
				j++;
				if (needle[j] == '\0')
					return (&haystack[i]);
			}
		}
		i++;
	}
	return (NULL);
}

int main()
{
	char a[] = "haystackneedlhaystackneedleneedle";
	char b[] = "needle";
	char c[] = "haystackneedlhaystackneedleneedle";
	char d[] = "";
	char e[] = "haystackneedle";
	char f[] = "needle";
	char g[] = "haystackneedlhaystackneedleneedle";
	char h[] = "nee4dle";
	
	printf("%s\n",strnstr(a, b, 33)); 	
	printf("%s\n",ft_strnstr(a, b, 33)); 	
	printf("%s\n",strnstr(c, d, 33)); 	
	printf("%s\n",ft_strnstr(c, d, 33)); 	
	printf("%s\n",strnstr(e, f, 14)); 	
	printf("%s\n",ft_strnstr(e, f, 14)); 	
	printf("%s\n",strnstr(g, h, 50)); 	
	printf("%s\n",ft_strnstr(g, h, 50)); 	
}
