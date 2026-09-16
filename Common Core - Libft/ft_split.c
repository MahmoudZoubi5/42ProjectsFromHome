/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahal-zo <mahal-zo@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 17:22:42 by mahal-zo          #+#    #+#             */
/*   Updated: 2026/09/16 18:05:37 by mahal-zo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	f_num_worde(char const *s, char c)
{
	int	ans;
	int	i;

	i = 0;
	ans = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			while (s[i] != c)
				i++;
			ans++;
		}
		else
		{
			i++;
		}
	}
	return (ans);
}

int	f_length_worde(char const *s, char c)
{
	int	i;
	int	ans;

	i = 0;
	ans = 0;
	while (s[i] && s[i] != c)
	{
		i++;
		ans++;
	}
	return (ans);
}

char	*f_create_worde(char const *s, char c)
{
	int		i;
	int		length_worde;
	char	*ans;

	i = 0;
	length_worde = f_length_worde(s, c);
	ans = (char *) malloc (length_worde + 1);
	if (!ans)
		return ('\0');
	ans[length_worde] = '\0';
	while (i < length_worde)
	{
		ans[i] = s[i];
		i++;
	}
	return (ans);
}

char	**ft_split(char const *s, char c)
{
	char	**boss;
	int		num_wordes;
	int		i;
	int		j;

	num_wordes = f_num_worde(s, c);
	boss = (char **) malloc (sizeof(char *) * (num_wordes + 1));
	if (!boss)
		return (NULL);
	boss[num_wordes] = NULL;
	i = 0;
	while (i < num_wordes)
	{
		while (s[j] == c)
			j++;
		boss[i] = f_create_worde(s + j, c);
		while (s[j] != c)
			j++;
		i++;
	}
	return (boss);
}

