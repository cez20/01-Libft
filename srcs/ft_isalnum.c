/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cemenjiv <cemenjiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 14:45:59 by cemenjiv          #+#    #+#             */
/*   Updated: 2023/05/17 22:13:04 by cemenjiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"  

int	ft_isalnum(int c)
{
	if (ft_isalpha (c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}
