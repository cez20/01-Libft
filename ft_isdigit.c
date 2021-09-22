/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cemenjiv <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 14:34:48 by cemenjiv          #+#    #+#             */
/*   Updated: 2021/09/15 14:45:28 by cemenjiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isdigit (int c)
{
	if (c >= '0' && c <= '9') 
		return (1);
	else
		return (0);
}

int main ()
{
	printf("%d\n", ft_isdigit('0'));
	printf("%d\n", ft_isdigit('A'));
	printf("%d\n", isdigit('0'));
	printf("%d\n", isdigit('A'));
}
