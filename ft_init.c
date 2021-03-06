/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcherie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 17:33:25 by bcherie           #+#    #+#             */
/*   Updated: 2021/01/27 18:41:10 by bcherie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_init(t_my_struct *new)
{
	new->type = 0;
	new->width = 0;
	new->min = 0;
	new->nul = 0;
	new->precision = -1;
	new->string_free = 0;
}
