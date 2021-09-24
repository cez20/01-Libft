/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cemenjiv <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 13:52:52 by cemenjiv          #+#    #+#             */
/*   Updated: 2021/09/23 10:31:17 by cemenjiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strrchr(char *s, int c)
{
	int i;

	i = strlen(s) + 1;
	while (i--)
	{
		if (s[i] == c)  
			return ((char*)&s[i]);
    }
	return (NULL);
}


int main()
{
	char a[] = "Cesar0Cesar";

	printf("La chaine de caractèeres initiales est ------> Cesar0Cesar\n");
	printf("\n");
	printf("La vraie fonction strrchr cherche le dernier r -------> %s\n",strrchr(a, 'r'));
	printf("MA fonction strrchr cherche le dernier r-------> %s\n",ft_strrchr(a, 'r'));
	printf("\n");
	printf("La vraie fonction strrchr  cherche le dernier C-------> %s\n",strrchr(a, 'C'));
	printf("MA fonction strrchr  cherche le dernier Ce-------> %s\n",ft_strrchr(a, 'C'));
	printf("\n");
	printf("La vraie fonction strrchr cherche le dernier s -------> %s\n",strrchr(a, 's'));
	printf("MA fonction strrchr cherche le dernier s -------> %s\n",ft_strrchr(a, 's'));
	printf("\n");
	printf("La vraie fonction strrchr cherche le nul-terminating  -------> %s\n",strrchr(a, '\0'));
	printf("MA fonction strrchr cherche le nul-terminatin  -------> %s\n",ft_strrchr(a, '\0'));
	printf("\n");
	printf("La vraie fonction cherche le 0 -------> %s\n",strrchr(a, '1'));
	printf("MA fonction strrchr cherche le 0 -------> %s\n",ft_strrchr(a, '1'));
	printf("\n");
}
