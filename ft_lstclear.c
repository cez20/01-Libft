/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cemenjiv <cemenjiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 11:55:22 by cemenjiv          #+#    #+#             */
/*   Updated: 2021/10/20 12:14:43 by cemenjiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *tmp;  // Création variable temporaire nommé "tmp"
	
	//Sécuriser la fonction. s'il n'y a pas de fonction "del", s'il n'y a pas de liste chainée et s'il n'y a pas de "list qui indique le point de départ"
	if (!del || !lst || *lst)  
		return ;
	while (lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}
