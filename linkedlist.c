/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linkedlist.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cemenjiv <cemenjiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:08:12 by cemenjiv          #+#    #+#             */
/*   Updated: 2021/10/20 15:47:38 by cemenjiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	void 	*number;
	struct 	node *next;
}			node;

void	ft_lstadd_front(node **head_ref,node *new_data)
{
	node *new_node;
	
	new_node = (node *)malloc(sizeof(node));
	
	new_node->number = new_data;
	new_node->next = *head_ref;
	*head_ref = new_node;

	printf("%p\n", *head_ref);
}

int main(void)
{

	node *n;  // le n represente l'ensemble des nodes qui seront crée
	node *head; // list sera l'élément qui nous permettra de parcourir tous les nodes. lst pointe initialement au début de la liste. 
	node **head1;
	node *data;
	int a;
	int b;
	int c;
	
	a = 40;
	b= 50;
	c = 60;
	data = (node *)&a;
	head = NULL;
	
	// Création du premier node
	n = malloc(sizeof(node)); 
	if (n == NULL)
		return 1; 
	n->number = (node *)&b; 
	n->next = NULL; 
	head = n; 
	printf ("%p\n", head);

	// Creation du 2eme node
	n = malloc(sizeof(node));
	printf ("%p\n", n);
	if (n == NULL)
	{
		free (head); 
		return (1);
	}
	n->number = (node *)&c;
	n->next = NULL;
	head->next = n;

	head1 = &head;

	ft_lstadd_front(head1, data);

	// Loop qui permet d'imprimer le contenu des nodes de la linked list. 
	for (node *tmp = head; tmp != NULL; tmp = tmp->next) 
	{
		printf("%d\n", *(int *)tmp->number);
	}

}