/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahal-zo <mahal-zo@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 12:34:22 by mahal-zo          #+#    #+#             */
/*   Updated: 2026/09/16 18:25:45 by mahal-zo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	size;
	size_t	i;
	size_t	j;

	size = ft_strlen(little);
	if (size == 0)
		return ((char *)big);
	i = 0;
	while (i < len && big[i])
	{
		j = 0;
		if (big[i] == little[j])
		{
			while (j + i < len && big[i + j]
				&& little[j] && big[i + j] == little[j])
				j++;
			if (little[j] == '\0')
				return ((char *)big + i);
			else
				i++;
		}
		else
			i++;
	}
	return (NULL);
}
