/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahal-zo <mahal-zo@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 11:11:03 by mahal-zo          #+#    #+#             */
/*   Updated: 2026/09/28 12:14:27 by mahal-zo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long n, int isupper)
{
	int		co;
	char	*out;

	co = 0;
	out = "0123456789abcdef";
	if (isupper)
		out = "0123456789ABCDEF";
	if (n / 16 != 0)
		co += ft_puthex(n / 16, isupper);
	write (1, &out[n % 16], 1);
	return (co + 1);
}
