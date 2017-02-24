/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchiorea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 10:04:08 by rchiorea          #+#    #+#             */
/*   Updated: 2016/07/24 10:04:09 by rchiorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_evalexpr.h"

int		ft_number(void)
{
	int result;

	result = ft_next() - '0';
	while (ft_actual() >= '0' && ft_actual() <= '9')
	{
		result = 10 * result + ft_next() - '0';
	}
	return (result);
}
