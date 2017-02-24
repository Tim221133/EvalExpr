/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op_primar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchiorea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 10:04:20 by rchiorea          #+#    #+#             */
/*   Updated: 2016/07/24 10:04:21 by rchiorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_evalexpr.h"

int		ft_op_primar(void)
{
	int		result;
	char	operand;

	result = ft_verificare();
	while (ft_actual() == '*' || ft_actual() == '/' || ft_actual() == '%')
	{
		operand = ft_next();
		if (operand == '*')
			result = result * ft_verificare();
		else if (operand == '/')
			result = result / ft_verificare();
		else
			result = result % ft_verificare();
	}
	return (result);
}
