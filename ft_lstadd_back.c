/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cemenjiv <cemenjiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 12:08:54 by cemenjiv          #+#    #+#             */
/*   Updated: 2021/10/18 16:01:52 by cemenjiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *last; // Déclaration d'un pointeur last de type t_list

	if(*alst) // Si l'adresse contenue dans le pointeur "alst" est différente de NULL
	{
		last = ft_lstlast(*alst); // Mon pointeur "last" va contenir l'adresse du dernier élément de la liste.
		last->next = new;  // L'adresse se trouvant à next qui est normalement NULL, va être changer pour contenir l'adresse de "new", nouvel élément àa ajouter.
	}
	else
		*alst = new; // Sinon, cela veut dire que alst ne contenait aucun élément, est nous voulons donc la valeur du premier élément deviennet "new"; 
}