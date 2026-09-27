/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahal-zo <mahal-zo@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 11:06:51 by mahal-zo          #+#    #+#             */
/*   Updated: 2026/09/20 15:32:21 by mahal-zo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	r;
	int	other;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	r = n % 10 + '0';
	other = n / 10;
	if (other <= 0)
	{
		write(fd, &r, 1);
		return ;
	}
	ft_putnbr_fd(other, fd);
	write(fd, &r, 1);
	return ;
}
