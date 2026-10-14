/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahal-zo <mahal-zo@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 16:16:57 by mahal-zo          #+#    #+#             */
/*   Updated: 2026/10/14 17:45:42 by mahal-zo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

#define BUFFER_SIZE 42

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest < src)
	{
		ft_memcpy (dest, src, n);
	}
	else
	{
		i = n - 1;
		while ((int) i >= 0)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	return (dest);
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
	ft_memmove(copy, s1, size1);
	ft_memmove(copy + size1, s2, size2);
	copy[size1 + size2] = '\0';
	return (copy);
}

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char) c)
			return (((char *)s + i));
		i++;
	}
	if (s[i] == (char) c)
		return (((char *)s + i));
	return (NULL);
}

void	reader(int fd, char **contaner)
{
	char	*buf;
	char	*temp;
	int		number_reads;

	buf = malloc(BUFFER_SIZE + 1);
	while (buf == NULL || !ft_strchr(buf, '\n'))
	{
		number_reads = read(fd, buf, BUFFER_SIZE);
		if (number_reads == 0)
			break ;
		else if (number_reads == -1)
			return (NULL);
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
	
	return (line);
}
