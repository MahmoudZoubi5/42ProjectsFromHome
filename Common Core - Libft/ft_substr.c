/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahal-zo <mahal-zo@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 14:43:54 by mahal-zo          #+#    #+#             */
/*   Updated: 2026/09/16 15:27:10 by mahal-zo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	size;
	size_t	i;
	char	*a;

	if (ft_strlen(s) <= start)
		return ('\0');
	i = start;
	size = 0;
	while (s[i] && size < len)
	{
		i++;
		size++;
	}
	a = (char *) malloc(sizeof(char) * size + 1);
	if (!a)
		return (NULL);
	i = 0;
	a[size] = '\0';
	while (i < size)
	{
		a[i] = s[start];
		i++;
		start++;
	}
	return (a);
}
