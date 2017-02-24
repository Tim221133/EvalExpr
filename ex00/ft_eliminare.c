/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eliminare.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchiorea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 12:23:44 by rchiorea          #+#    #+#             */
/*   Updated: 2016/07/24 12:23:46 by rchiorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_evalexpr.h"

int		ft_strlen(void)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (g_str[i])
	{
		if (g_str[i] != ' ')
			j++;
		i++;
	}
	return (i);
}

char	*ft_eliminare(void)
{
	int		i;
	char	*s;
	int		j;

	i = 0;
	j = 0;
	s = (char *)malloc(sizeof(char) * (ft_strlen() + 1));
	while (g_str[i])
	{
		if (g_str[i] != ' ')
		{
			s[j] = g_str[i];
			j++;
		}
		i++;
	}
	s[i] = '\0';
	return (s);
}

char	ft_actual(void)
{
	return (*g_str);
}

char	ft_next(void)
{
	return (*g_str++);
}
