/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahal-zo <mahal-zo@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 17:29:42 by mahal-zo          #+#    #+#             */
/*   Updated: 2026/09/21 22:51:59 by mahal-zo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest < src)
	{
		ft_memcpy (dest, src, n);
	}
	else
	{
		i = n - 1;
		while ((int) i >= 0)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	return (dest);
}
