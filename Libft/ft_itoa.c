/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahal-zo <mahal-zo@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 08:28:03 by mahal-zo          #+#    #+#             */
/*   Updated: 2026/09/17 13:43:20 by mahal-zo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	length(int n)
{
	int	ans;

	ans = 0;
	while (n > 0)
	{
		ans++;
		n /= 10;
	}
	return (ans);
}

static void	fill(char *a, int n)
{
	int	i;

	i = length(n) - 1;
	while (i >= 0)
	{
		a[i] = n % 10 + '0';
		n /= 10;
		i--;
	}
}

char	*ft_itoa(int n)
{
	char	*ans;
	int		s;

	s = 0;
	if (n < 0)
		s++;
	ans = malloc(length(n) + s + 1);
	if (!ans)
		return (NULL);
	ans[length(n) + s] = '\0';
	if (n < 0)
	{
		ans[0] = '-';
		fill(ans + 1, n * -1);
	}
	else
		fill(ans, n);
	return (ans);
}
