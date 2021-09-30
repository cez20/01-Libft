/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cemenjiv <cemenjiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 22:03:12 by cemenjiv          #+#    #+#             */
/*   Updated: 2021/09/29 21:55:50 by cemenjiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_strchr_in_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		i;
	int		start;
	int		end;

	start = 0;
	while (s1[start] && ft_strchr_in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr_in_set(s1[end - 1], set))
		end--;
	ptr = (char *)malloc(sizeof(*ptr) * (end - start + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (start < end)
		ptr[i++] = s1[start++];
	ptr[i] = '\0';
	return (ptr);
}

int	main()
{
	char a[] = "cepouce1234cez";
	char b[] = "cez";
	char c[] = "CesarCesarCe";
	char d[] = "C";

	printf("%s\n", ft_strtrim(a, b));
	printf("%s\n", ft_strtrim(c, d));
}