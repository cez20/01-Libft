/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cemenjiv <cemenjiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 10:43:26 by cemenjiv          #+#    #+#             */
/*   Updated: 2021/09/29 21:40:03 by cemenjiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Est-ce que le nouveau string doit absolument contenir le nul-terminating '\0'
// include ici-bas sera a enlevé et changer fonction strlcpy par ft_strlcpy

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;

	ptr = (char *)malloc((len + 1) * sizeof(*ptr));
	if (!ptr)
		return (NULL);
	ft_strlcpy (ptr, (s + start), len + 1);
	return (ptr);
}
