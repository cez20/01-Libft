/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cemenjiv <cemenjiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 10:50:40 by cemenjiv          #+#    #+#             */
/*   Updated: 2021/10/18 11:53:49 by cemenjiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstlast(t_list *lst)
{
	while (lst != NULL) // Équivalent de ---> while (lst). Tant que l'adresse contenu dans lst n'est pas NULL
	{
		if(!lst->next)  // Cette partie n'est pas obligatoire, car s'il n'y a pas d'éléemnt dans la liste, on retourne la liste tout simplement.  
			return (lst);  //Ceci n'est pas obligatoire.
		lst = lst->next;  //lst prend l'adresse qui se trouve dans lst-next
	}
	return (lst);
}
