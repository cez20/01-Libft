/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cemenjiv <cemenjiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 12:43:52 by cemenjiv          #+#    #+#             */
/*   Updated: 2021/09/28 13:35:00 by cemenjiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <string.h>
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*ptr;

	ptr = (void *)malloc(strlen(s1 + 1) * sizeof(*s1));
	if (!ptr)
		return (NULL);
	strlcpy(ptr, s1, sizeof(ptr));
	return (ptr);
}
