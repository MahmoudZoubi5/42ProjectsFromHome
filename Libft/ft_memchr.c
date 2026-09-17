/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahal-zo <mahal-zo@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 12:03:54 by mahal-zo          #+#    #+#             */
/*   Updated: 2026/09/17 16:35:38 by mahal-zo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s1;
	size_t			i;
	
	s1 = (unsigned char *)s;
	i = 0;
	while (i < n && s1[i])
	{
		if (s1[i] == c)
			return (s1 + i);
		i++;
	}
	return (NULL);
}
