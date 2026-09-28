/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahal-zo <mahal-zo@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 11:36:46 by mahal-zo          #+#    #+#             */
/*   Updated: 2026/09/28 16:38:34 by mahal-zo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	controlar(va_list list, char c)
{
	int	co;

	co = 0;
	if (c == 'c')
		co += ft_putchar(va_arg(list, int));
	else if (c == 's')
		co += ft_putstr(va_arg(list, char *));
	else if (c == 'p')
		co += ft_putp(va_arg(list, void *));
	else if (c == 'd' || c == 'i')
		co += ft_putnbr(va_arg(list, int));
	else if (c == 'u')
		co += ft_putunbr(va_arg(list, unsigned int));
	else if (c == 'x')
		co += ft_puthex(va_arg(list, unsigned int), 0);
	else if (c == 'X')
		co += ft_puthex(va_arg(list, unsigned int), 1);
	else if (c == '%')
		co += ft_putchar(c);
	else
	{
		co += ft_putchar('%');
		co += ft_putchar(c);
	}
	return (co);
}

int	ft_printf(const char *s, ...)
{
	va_list	list;
	int		co;
	int		i;

	va_start(list, s);
	i = 0;
	co = 0;
	while (s[i])
	{
		if (s[i] == '%' && s[i + 1])
		{
			co += controlar(list, s[i + 1]);
			i += 2;
		}
		else
		{
			co += ft_putchar(s[i]);
			i++;
		}
	}
	va_end(list);
	return (co);
}
