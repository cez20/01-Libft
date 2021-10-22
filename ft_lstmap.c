/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cemenjiv <cemenjiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 13:14:31 by cemenjiv          #+#    #+#             */
/*   Updated: 2021/10/22 09:58:46 by cemenjiv         ###   ########.fr       */
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
			if (!new)
			{
				ft_lstclear(&head, del);
				return (NULL);
			}
			new = (t_list *)malloc(sizeof(t_list));
			new = f(lst->content);
			ft_lstadd_back(&lst, new);
			lst = lst->next;
		}	
	}	
	return (head);
}
