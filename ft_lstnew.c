/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cemenjiv <cemenjiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 12:46:47 by cemenjiv          #+#    #+#             */
/*   Updated: 2021/10/15 14:47:29 by cemenjiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*str;
	//char a[] = "Cesar";
	//char b[] = "Menjivar";
	
	//content = c;
	str = (t_list *)malloc(sizeof(*str));
	str->content = content;
	str->next = NULL;
	printf ("%s\n", (*str).content);
	//printf ("%d\n", *(int *)(*str).content);
	//printf ("%d\n", *(int *)str->content);
	printf ("%p\n", str->next);
	return (str);
}

int main()
{

	char *a;
	a[] = (Cesar);
	
	ft_lstnew(a);
}