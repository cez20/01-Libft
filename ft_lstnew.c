/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cemenjiv <cemenjiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 12:46:47 by cemenjiv          #+#    #+#             */
/*   Updated: 2021/10/21 15:40:50 by cemenjiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*str;

	str = (t_list *)malloc(sizeof(*str));
	if (!str)
		return (NULL);
	str->content = content;
	str->next = NULL;
	return (str);
}
