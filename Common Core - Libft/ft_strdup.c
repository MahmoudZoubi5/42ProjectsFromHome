/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahal-zo <mahal-zo@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 14:19:27 by mahal-zo          #+#    #+#             */
/*   Updated: 2026/09/16 14:41:06 by mahal-zo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(const char *s)
{
	int		i;
	char	*a;

	a = malloc(sizeof (char) * ft_strlen(s) + 1);
	i = 0;
	while (s[i])
	{
		a[i] = s[i];
		i++;
	}
	return (a);
}
