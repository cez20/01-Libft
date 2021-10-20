/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cemenjiv <cemenjiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 11:45:01 by cemenjiv          #+#    #+#             */
/*   Updated: 2021/10/20 11:45:14 by cemenjiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_erase (void *lst)
{
	void	*content;
	
	content = lst;
	free(content);
	
	for (t_list *tmp = lst; tmp != NULL; tmp = tmp->next) 
	{
		printf("%d\n", *(int *)tmp->content);
	}	
}

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst)
	{
		del(lst->next);
		free(lst);	
	}	
}

int main()
{
	t_list *node; 
	t_list *list;
	int a = 1040;
	int b = 1225;

	node = (t_list *)malloc(sizeof(t_list));
	/*if (node == NULL)
		return (1);*/

	node->content = &a; 	
	node->next = NULL;
	list = node;
	
	node = (t_list *)malloc(sizeof(t_list));
	if (node == NULL)
		return (1);

	node->content = &b; 	
	node->next = NULL;
	list->next = node;*/

	ft_lstdelone(list, ft_erase);

	/*for (t_list *tmp = list; tmp != NULL; tmp = tmp->next) 
	{
		printf("%d\n", *(int *)tmp->content);
	}
}