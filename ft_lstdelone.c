/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cemenjiv <cemenjiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 11:04:58 by cemenjiv          #+#    #+#             */
/*   Updated: 2021/10/19 21:45:23 by cemenjiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void ft_erase (void *lst)
{
	if(lst != NULL)
	{
		free(lst);
	}
}

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst)
	{
		del(lst->content);
		free(lst);		
	}	
}

int main()
{
	t_list *node; 
	t_list *list;

	node = (t_list *)malloc(sizeof(t_list));

	node->content = (void *)1000; 	
	node->next = NULL;
	list = node;
	
	node = (t_list *)malloc(sizeof(t_list));
	
	node->content = (void *)1040;
	node->next = NULL;
	list->next = node;
	
	node = (t_list *)malloc(sizeof(t_list));
	
	node->content = (void *)21474856;
	node->next = NULL;
	list->next->next = node;
	ft_lstdelone(list, ft_erase);

	for (t_list *tmp = list; tmp != NULL; tmp = tmp->next) 
	{
		printf("%d\n", (int)tmp->content);
	}
}