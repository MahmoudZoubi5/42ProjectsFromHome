/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahal-zo <mahal-zo@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 14:19:27 by mahal-zo          #+#    #+#             */
/*   Updated: 2026/09/16 14:30:45 by mahal-zo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(const char *s)
{
	int		i;
	int		size;
	char	*a;

	size = ft_strlen(s);
	a = malloc(sizeof (char) * size + 1);
	i = 0;
	while (s[i])
	{
		a[i] = s[i];
		i++;
	}
	return (a);
}
