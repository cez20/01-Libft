/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: invite <invite@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 11:55:22 by cemenjiv          #+#    #+#             */
/*   Updated: 2021/10/20 18:12:55 by invite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *tmp;  // Création variable temporaire nommé "tmp"
	
	//Sécuriser la fonction. s'il n'y a pas de fonction "del", s'il n'y a pas de liste chainée et s'il n'y a pas de "list qui indique le point de départ"
	if (lst && del) 
	{
		while (*lst)
		{
			tmp = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = tmp;
		}
	}
}
