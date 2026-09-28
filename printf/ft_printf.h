/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahal-zo <mahal-zo@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 10:48:42 by mahal-zo          #+#    #+#             */
/*   Updated: 2026/09/28 16:50:49 by mahal-zo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_putchar(char c);
int	ft_putnbr(int n);
int	ft_putstr(char *s);
int	ft_putunbr(unsigned int n);
int	ft_puthex(unsigned long n, int isupper);
int	ft_printf(const char *s, ...);
int	ft_putp(void *p);
#endif