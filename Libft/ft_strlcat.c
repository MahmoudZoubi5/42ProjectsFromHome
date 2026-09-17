/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahal-zo <mahal-zo@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 09:00:24 by mahal-zo          #+#    #+#             */
/*   Updated: 2026/09/17 15:53:12 by mahal-zo         ###   ########.fr       */
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
	if (!dst)
		return (ssize);
	if (!src)
		return (dsize);
	i = 0;
	if (size < dsize)
		return (ft_strlen(src) + size);
	while (i + dsize < size - 1 && src[i])
	{
		dst[i + dsize] = src[i];
		i++;
	}
	dst[size] = '\0';
	return (ft_strlen(src) + dsize);
}
