/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cemenjiv <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 13:20:30 by cemenjiv          #+#    #+#             */
/*   Updated: 2021/09/23 10:30:57 by cemenjiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int i;
	int j;

	i = 0;
	j = strlen(s);
	while (i <= j)
	{
		if (s[i] == c)
			return ((char*)&s[i]);
		i++;
    }
	return (NULL);
}

int main()
{
	char a[] = "Cesar0Cesar";

	printf("La chaine de caractères initiale est ------> Cesar0Cesar\n");
	printf("\n");
	printf("La vraie fonction strchr donne -------> %s\n",strchr(a, 'e'));
	printf("MA fonction strchr donne -------> %s\n",ft_strchr(a, 'e'));
	printf("\n");
	printf("La vraie fonction strchr donne -------> %s\n",strchr(a, 'a'));
	printf("MA fonction strchr donne -------> %s\n",ft_strchr(a, 'a'));
	printf("\n");
	printf("La vraie fonction strchr donne -------> %s\n",strchr(a, '\0'));
	printf("MA fonction strchr donne -------> %s\n",ft_strchr(a, '\0'));
	printf("\n");
	printf("La vraie fonction strchr donne -------> %s\n",strchr(a, '1'));
	printf("MA fonction strchr donne -------> %s\n",ft_strchr(a, '1'));
	printf("\n");
}
