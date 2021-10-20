/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linkedlist.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cemenjiv <cemenjiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:08:12 by cemenjiv          #+#    #+#             */
/*   Updated: 2021/10/19 12:04:30 by cemenjiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int 	number;
	struct 	node *next;
}			node;

int main(void)
{
	node *list;
	node *n;
	
	list = NULL;
	n = malloc(sizeof(node)); // size of n is the size of node. In others words, size of an int(4 bytes) and sizeof pointer (8 bytes). Total of 12 bytes. 
	if (n == NULL)
		return 1; // équivalent de if(!n), return (NULL). façcon de quitter rapidement le programme si la mémoire ne peut être alloué. 
	n->number = 1; // "n" est le premier élément de la liste. Tel que definit dans la structure, il doit recevoir un int. qui est 1
	n->next = NULL; // l'adresse du prochain élément de la liste est NULL, ce qui veut dire que la liste ne contient qu'un seul élément. 
	list = n; // on assigne notre pointeur list à "n", car il s'agit du point de départ de la liste.

	
	n = malloc(sizeof(node));
	/*if (n == NULL)
	{
		free (list); //We free list here, because if we are unable to add another element to our list, we better remove eveything we already did. 
		return (1);
	}*/
	n->number = 2;
	n->next = NULL;
	list->next = n;

	n = malloc(sizeof(node));
	/*if (n == NULL)
	{
		free(list->next);  // il faut libérer l'élément antérieur vers lequel on pointe
		free(list); // il faut aussi libérer par la suite, libérer list (il faut aller de l'élément de la chaine le plus proche vers le plus loin.  )
		return 1;
	}*/
	n->number = 3;
	n->next = NULL;
	list->next->next = n;

	for (node *tmp = list; tmp != NULL; tmp = tmp->next) 
	{
		printf("%d\n", tmp->number);
	}
	/* Boucle for. Le début est ma variable tmp de type node qui va prendre la valeur initiale de list. Tant que tmp
	ne vaut pas NULL et on itere la variable temmp, car le pointeur tmp prendre l'adresse de list->next qui est maintenant tmp->next 
	*/
	while (list != NULL) // façcon de libérer la mémoire de manièere graduelle
	{
		node *tmp = list->next; // je suis présentement dans le 1er élément de ma liste. je crée variable temporaire qui contient adresse du 2 element
		free(list); //je libèere le 1er élément de ma liste
		list = tmp; //list devient l'adresse du 2eme éléments. Équivalent de list++;
	}	
}