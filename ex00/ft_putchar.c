/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchiorea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 10:06:11 by rchiorea          #+#    #+#             */
/*   Updated: 2016/07/24 10:06:18 by rchiorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_evalexpr.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int nb2;

	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	nb2 = nb;
	if (nb2 >= 10)
	{
		ft_putnbr(nb2 / 10);
		ft_putnbr(nb2 % 10);
	}
	else
		ft_putchar(nb2 + '0');
}
