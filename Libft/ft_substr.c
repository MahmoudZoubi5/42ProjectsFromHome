/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahal-zo <mahal-zo@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 14:43:54 by mahal-zo          #+#    #+#             */
/*   Updated: 2026/09/19 17:27:30 by mahal-zo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	size;
	size_t	i;
	char	*a;

	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
	i = start;
	size = 0;
	while (size < len && s[i])
	{
		i++;
		size++;
	}
	a = (char *) malloc(sizeof(char) * (size + 1));
	if (!a)
		return (NULL);
	i = 0;
	while (i < size)
	{
		a[i] = s[start];
		i++;
		start++;
	}
	a[i] = '\0';
	return (a);
}
