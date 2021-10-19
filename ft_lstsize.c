/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cemenjiv <cemenjiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 10:45:43 by cemenjiv          #+#    #+#             */
/*   Updated: 2021/10/18 15:01:56 by cemenjiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_lstsize(t_list *lst)
{
	size_t	i;

	i = 0;// i est un incrementateur qui me permet de parcourir l'ensemble des listes
	while (lst != NULL) //Tant que le pointeur "lst" contient une adresse et qu'il ne vaut pas NULL;  
	{
		lst = lst->next; // pointeur "lst" prend comme adresse, l'adresse du prochain élément de la liste. 
		i++; // on augmente le compteur de liste de 1; 
	}
	return (i); //retourne le nombre d'élément de la liste 
}