/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahal-zo <mahal-zo@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 16:16:57 by mahal-zo          #+#    #+#             */
/*   Updated: 2026/10/19 12:08:08 by mahal-zo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	size;
	size_t	i;
	char	*a;

	if (ft_strlen(s) <= start || len == 0)
		return (NULL);
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

static char	*ft_strjoin(char const *s1, char const *s2)
{
	int		size1;
	int		size2;
	int		i;
	char	*copy;

	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	copy = (char *) malloc (sizeof (char) * (size1 + size2 + 1));
	if (!copy)
		return (NULL);
	i = 0;
	while (s1 != NULL && s1[i])
	{
		copy[i] = s1[i];
		i++;
	}
	while (s2[i - size1])
	{
		copy[i] = s2[i - size1];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

static int	ft_strchr(const char *s, int c)
{
	int		i;

	if (s == NULL)
		return (-1);
	i = 0;
	while (s[i])
	{
		if (s[i] == (char) c)
			return (i);
		i++;
	}
	if (s[i] == (char) c)
		return (i);
	return (-1);
}

static int	reader(int fd, char **contaner)
{
	char	*buf;
	char	*temp;
	int		number_reads;

	buf = malloc(BUFFER_SIZE + 1);
	if (!buf)
		return (0);
	buf[0] = '\0';
	while (ft_strchr(buf, '\n') == -1)
	{
		number_reads = read(fd, buf, BUFFER_SIZE);
		if (number_reads == 0 || number_reads == -1)
			break ;
		buf[number_reads] = '\0';
		temp = *contaner;
		*contaner = ft_strjoin(*contaner, buf);
		free(temp);
	}
	free(buf);
	return (number_reads);
}

char	*get_next_line(int fd)
{
	int			num_reads;
	char		*line;
	char		*temp;
	static char	*contaner;

	if (fd < 0 || BUFFER_SIZE <= 0 || BUFFER_SIZE >= 2147483647)
		return (NULL);
	num_reads = reader(fd, &contaner);
	line = ft_substr(contaner, 0, ft_strchr(contaner, '\n') + 1);
	temp = contaner;
	contaner = ft_substr(contaner, ft_strlen(line), ft_strlen(contaner));
	if ((num_reads == 0 || num_reads == -1)
		&& ft_strlen(line) == 0 && ft_strlen(contaner) != 0)
	{
		free(line);
		line = contaner;
		contaner = NULL;
	}
	free(temp);
	return (line);
}
