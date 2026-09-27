/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahal-zo <mahal-zo@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 15:33:54 by mahal-zo          #+#    #+#             */
/*   Updated: 2026/09/24 14:28:54 by mahal-zo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*a;

	if (n != 0 && size * n / n != size)
		return (NULL);
	a = malloc(n * size);
	if (!a)
		return (NULL);
	ft_bzero(a, n * size);
	return (a);
}
