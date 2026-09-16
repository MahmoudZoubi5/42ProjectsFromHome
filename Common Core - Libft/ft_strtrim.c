/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahal-zo <mahal-zo@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 16:56:22 by mahal-zo          #+#    #+#             */
/*   Updated: 2026/09/16 17:19:09 by mahal-zo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is(char a, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == a)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		s;
	int		e;
	int		i;
	char	*ans;

	s = 0;
	e = 0;
	i = 0;
	while (s1[i] && is(s1[i], set))
	{
		i++;
		s++;
	}
	i = ft_strlen(s1) - 1;
	while (i >= 0 && is(s1[i], set))
	{
		i--;
		e++;
	}
	ans = (char *) malloc (ft_strlen(s1) - s - e + 1);
	if (!ans)
		return (NULL);
	ans[ft_strlen(s1) - s - e] = '\0';
	ans = ft_memmove(ans, s1 + s, ft_strlen(s1) - s - e);
	return (ans);
}
