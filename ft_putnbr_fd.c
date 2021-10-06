/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cemenjiv <cemenjiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 22:31:26 by cemenjiv          #+#    #+#             */
/*   Updated: 2021/10/06 14:50:15 by cemenjiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char			str[10];
	unsigned int	i;
	unsigned int	nb;

	nb = (unsigned int)n;
	if (n < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	i = 0;
	if (nb == 0)
	{
		str[i] = '0';
		write(1, &str[i], 1);
	}
	while (nb > 0)
	{
		str[i++] = '0' + (nb % 10);
		nb /= 10;
	}
	while (i--)
		write(fd, &str[i], 1);
}
