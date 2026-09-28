/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahal-zo <mahal-zo@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 16:29:23 by mahal-zo          #+#    #+#             */
/*   Updated: 2026/09/28 16:32:08 by mahal-zo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putp(void *p)
{
	if (p == NULL)
		return (ft_putstr("(nil)"));
	ft_putstr("0x");
	return (ft_puthex((unsigned long)p, 0) + 2);
}
