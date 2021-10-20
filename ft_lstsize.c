/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cemenjiv <cemenjiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 10:45:43 by cemenjiv          #+#    #+#             */
/*   Updated: 2021/10/20 15:19:13 by cemenjiv         ###   ########.fr       */
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

/*int main()
{
	t_list *node;
	t_list *head;
	t_list *head1;
	int a;
	int b;

	head1= NULL;
	a = 42;
	b = 50;
	
	//Création du premier node de la liste chainé
	node = (t_list *)malloc(sizeof(t_list));
	node->content = (t_list *)&a;
	head = node;

	//Création de la 2e node de la liste chainée. 
	node = (t_list *)malloc(sizeof(t_list));
	node->content = (t_list *)&b;
	head->next = node;

	printf("Cette liste chainée devrait donnée---->%d NODE\n",ft_lstsize(head));
	printf("Cette liste chainée devrait donnée---->%d NODE\n",ft_lstsize(head1));
	
}*/