/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cemenjiv <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 11:45:23 by cemenjiv          #+#    #+#             */
/*   Updated: 2021/09/24 12:18:04 by cemenjiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	number;

	i = 0;
	number = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{	
		number = number * 10 + str[i] - '0';
		i++;
	}
	return (number);
}
int main()
{
 	char a[] = "---+1234ab567";
 	char b[] = "aa98";
    char c[] = "98  76";
	char d[] = "		1234";

     printf("%d\n",ft_atoi(a));
     printf("%d\n",ft_atoi(b));
     printf("%d\n",ft_atoi(c));
     printf("%d\n",ft_atoi(d));
}

