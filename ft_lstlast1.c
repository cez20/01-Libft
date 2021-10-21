/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cemenjiv <cemenjiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 10:50:40 by cemenjiv          #+#    #+#             */
/*   Updated: 2021/10/21 13:05:27 by cemenjiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

/*int main()
{
	t_list	*node;
	t_list	*head;
	t_list	*tmp;
	t_list 	*value;
	int a = 3;
	int b = 5;
	int c = 42;
	
	node = (t_list *)malloc(sizeof(t_list));
	node->content = &a;
	node->next = NULL;
	head = node;

	tmp = head;

	node = (t_list *)malloc(sizeof(t_list));
	node->content = &b;
	node->next = NULL;
	head->next = node;

	node = (t_list *)malloc(sizeof(t_list));
	node->content = &c;
	node->next = NULL;
	head->next->next = node;

	/*for (t_list *tmp = head; tmp != NULL; tmp = tmp->next) 
	{
		printf("%d\n", *(int *)tmp->content);
	}*/

	value = ft_lstlast(head); // j'ai mis le pointeur "t_list head*"
	printf("%d\n", *(int *)value->content);
}*/
