/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahal-zo <mahal-zo@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 17:22:42 by mahal-zo          #+#    #+#             */
/*   Updated: 2026/09/20 14:34:19 by mahal-zo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	f_num_worde(char const *s, char c)
{
	int	num;
	int	i;

	i = 0;
	num = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			while (s[i] && s[i] != c)
				i++;
			num++;
		}
		else
		{
			i++;
		}
	}
	return (num);
}

static int	f_length_worde(char const *s, char c)
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

static char	*f_create_worde(char **arr, char const *s, char c, int *j)
{
	int		i;
	int		length_worde;
	char	*ans;

	i = 0;
	length_worde = f_length_worde(s, c);
	ans = ft_substr(s, 0, length_worde);
	if (!ans)
	{
		while (arr[i])
		{
			free(arr[i]);
			i++;
		}
		return (NULL);
	}
	*j += ft_strlen(ans);
	(void) j;
	return (ans);
}

char	**ft_split(char const *s, char c)
{
	char	**ans;
	int		num_wordes;
	int		i;
	int		j;

	num_wordes = f_num_worde(s, c);
	ans = (char **) malloc (sizeof(char *) * (num_wordes + 1));
	if (!ans)
		return (NULL);
	i = 0;
	j = 0;
	while (i < num_wordes)
	{
		while (s[j] == c)
			j++;
		ans[i] = f_create_worde(ans, s + j, c, &j);
		if (ans[i] == NULL)
		{
			free(ans);
			return (NULL);
		}
		i++;
	}
	ans[i] = NULL;
	return (ans);
}
