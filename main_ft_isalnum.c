/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_isalnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cemenjiv <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 15:52:05 by cemenjiv          #+#    #+#             */
/*   Updated: 2021/09/27 12:01:10 by cemenjiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	main (void)
{
	int a = '0';
	int b = 'Z';
	int c = 'a';
	int d = '#';

	printf("\nHERE ARE THE TEST FOR ******FT_ISALNUM******\n");
	printf("ISALNUM for '0' gives  ----> %d\n", isalnum(a));
	printf("FT_ISALNUM for '0' gives ---->% d\n", ft_isalnum(a));
	printf("ISALNUM for 'Z' gives  ----> %d\n", isalnum(b));
	printf("FT_ISALNUM for 'Z' gives ----> %d\n", ft_isalnum(b));
	printf("ISALNUM for 'a' gives  ----> %d\n", isalnum(c));
	printf("FT_ALNUM for 'a' gives ----> %d\n", ft_isalnum(c));
	printf("ISALNUM for '#' gives  ----> %d\n", isalnum(d));
	printf("FT_ALNUM for '#' gives ----> %d\n\n", ft_isalnum(d));
}
