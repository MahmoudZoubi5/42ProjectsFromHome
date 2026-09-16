/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahal-zo <mahal-zo@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 15:29:15 by mahal-zo          #+#    #+#             */
/*   Updated: 2026/09/16 16:52:21 by mahal-zo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		size1;
	int		size2;
	char	*copy;

	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	copy = (char *) malloc (sizeof (char) * (size1 + size2 + 1));
	if (!copy)
		return (NULL);
	ft_memmove(copy, s1, size1);
	ft_memmove(copy + size1, s2, size2);
	return (copy);
}
