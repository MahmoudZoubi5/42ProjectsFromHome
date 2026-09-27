/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahal-zo <mahal-zo@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 08:28:03 by mahal-zo          #+#    #+#             */
/*   Updated: 2026/09/20 15:26:17 by mahal-zo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	length(int n)
{
	int	ans;

	ans = 0;
	while (n != 0)
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

static char	*create_arr(int size)
{
	char	*ans;

	ans = malloc(size);
	if (!ans)
		return (NULL);
	return (ans);
}

char	*ft_itoa(int n)
{
	char	*ans;

	if (n == -2147483648)
		ans = ft_strdup("-2147483648");
	else if (n == 0)
		ans = ft_strdup("0");
	else if (n < 0)
	{
		ans = create_arr(length(n) + 2);
		ans[0] = '-';
		fill (ans + 1, n * -1);
		ans[length(n) + 1] = '\0';
	}
	else
	{
		ans = create_arr(length(n) + 1);
		fill (ans, n);
		ans[length(n)] = '\0';
	}
	return (ans);
}
