/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahal-zo <mahal-zo@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 16:16:57 by mahal-zo          #+#    #+#             */
/*   Updated: 2026/10/18 17:50:55 by mahal-zo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 5 // the problem in the buffer size 

size_t	ft_strlen(const char *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	size;
	size_t	i;
	char	*a;

	if (ft_strlen(s) <= start)
		return (malloc(0));
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


size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}



char	*ft_strjoin(char const *s1, char const *s2)
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
	ft_strlcpy(copy, s1, size1);
	ft_strlcpy(copy + size1, s2, size2);
	copy[size1 + size2] = '\0';
	return (copy);
}

int	ft_strchr(const char *s, int c)
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

void	reader(int fd, char **contaner)
{
	char	*buf;
	char	*temp;
	int		number_reads;

	buf = malloc(BUFFER_SIZE + 1);
	buf[0] = '\0';
	if (!buf)
		return ;
	number_reads = 1;
	while (number_reads > 0 && ft_strchr(buf, '\n') == -1 )
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
	return ;
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*contaner;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	reader(fd, &contaner);
	line = ft_substr(contaner, 0,ft_strchr(contaner, '\n'));
	contaner = ft_substr(contaner, ft_strlen(line), ft_strlen(contaner));
	// printf("line = %s \n contaner = %s \n-----------------------\n", line , contaner);
	return (line);
}
