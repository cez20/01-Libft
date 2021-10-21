/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cemenjiv <cemenjiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 13:14:31 by cemenjiv          #+#    #+#             */
/*   Updated: 2021/10/21 15:06:12 by cemenjiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*head;
	
	head = NULL; 
	if (lst && f && del)
	{
		while(lst)
		{
			new = (t_list *)malloc(sizeof(t_list));
			if (!new)
			{
				while(head != NULL)
				{
					new = head->next;
					(*del)(head->content);
					free(head);
					head = new;
				}	
				lst = NULL;
				return (NULL);
			}			
		}	
		ft_lstadd_back(&head, new);
		lst = lst->next;
	}
	return (head);
}