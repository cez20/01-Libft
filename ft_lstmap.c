/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: invite <invite@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 13:14:31 by cemenjiv          #+#    #+#             */
/*   Updated: 2021/10/21 22:25:03 by invite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*head;

	head = NULL;
	if (lst)
	{
		while (lst)
		{
			if (!(new =ft_lstnew(f(lst->content))))
			{
				ft_lstclear(&new, del);
				return(NULL);
			}	
			ft_lstadd_back(&head, new);
			lst = lst->next;		
		}
	}
	return (head);
}
