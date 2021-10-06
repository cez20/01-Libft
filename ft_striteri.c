/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cemenjiv <cemenjiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 19:54:09 by cemenjiv          #+#    #+#             */
/*   Updated: 2021/10/06 14:50:12 by cemenjiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_str_to_z(unsigned int i, char *str)
{
	while (str[i] != '\0')
	{
		str[i] = 'Z';
		i++;
	}
}

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}	
}
