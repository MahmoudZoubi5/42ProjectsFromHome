/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahal-zo <mahal-zo@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 09:00:24 by mahal-zo          #+#    #+#             */
/*   Updated: 2026/09/24 14:06:40 by mahal-zo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dsize;
	size_t	ssize;

	dsize = ft_strlen(dst);
	ssize = ft_strlen(src);
	i = 0;
	if (size <= dsize)
		return (ssize + size);
	while (i + dsize + 1 < size && src[i])
	{
		dst[i + dsize] = src[i];
		i++;
	}
	dst[i + dsize] = '\0';
	return (ssize + dsize);
}
