/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cemenjiv <cemenjiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 14:16:23 by cemenjiv          #+#    #+#             */
/*   Updated: 2021/09/29 12:34:26 by cemenjiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[i] == '\0')
	{
		return (haystack);
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
