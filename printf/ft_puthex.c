/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahal-zo <mahal-zo@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 11:11:03 by mahal-zo          #+#    #+#             */
/*   Updated: 2026/10/01 14:17:04 by mahal-zo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long n, int isupper)
{
	int		co;
	char	*out;

	co = 0;
	if (isupper)
		out = "0123456789ABCDEF";
	else
		out = "0123456789abcdef";
	if (n / 16 != 0)
		co += ft_puthex(n / 16, isupper);
	write (1, &out[n % 16], 1);
	return (co + 1);
}
