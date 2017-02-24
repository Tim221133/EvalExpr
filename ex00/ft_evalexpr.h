/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_evalexpr.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchiorea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 10:03:48 by rchiorea          #+#    #+#             */
/*   Updated: 2016/07/24 10:03:53 by rchiorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_EVALEXPR_H
# define __FT_EVALEXPR_H

# include <unistd.h>
# include <stdlib.h>

char		*g_str;
char		*ft_eliminare();
char		ft_actual();
char		ft_next();
int			ft_op_secundar();
int			ft_number();
int			ft_verificare();
int			ft_op_primar();
int			eval_expr();
void		ft_putchar(char c);
void		ft_putnbr(int nb);
#endif
