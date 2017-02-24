/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op_secundar.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchiorea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 10:05:47 by rchiorea          #+#    #+#             */
/*   Updated: 2016/07/24 10:05:49 by rchiorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_evalexpr.h"

int		ft_op_secundar(void)
{
	int result;

	result = ft_op_primar();
	while (ft_actual() == '+' || ft_actual() == '-')
		if (ft_next() == '+')
			result = result + ft_op_primar();
		else
			result = result - ft_op_primar();
	return (result);
}
