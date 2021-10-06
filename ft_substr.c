/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cemenjiv <cemenjiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 10:43:26 by cemenjiv          #+#    #+#             */
/*   Updated: 2021/10/06 14:49:23 by cemenjiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
