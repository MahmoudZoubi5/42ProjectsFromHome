// #include <unistd.h>
// #include <stdio.h>
// #include <fcntl.h>


// char	*get_next_line(int fd);
// char	*ft_strjoin(char const *s1, char const *s2);

// void	n(char **s, char *a)
// {
// 	*s = ft_strjoin(*s,a);
// }

// void	f(char *a)
// {
// 	static char *s;
// 	n(&s, a);
// 	printf("%s\n", s);
// }

// int main()
// {
// 	int num = open("t.txt", O_RDONLY);
// 	char *line;

// 	for (int i = 0 ; 1 ; i++)
// 	{
// 		line = get_next_line(num);
// 		if (line == NULL)
// 			break;
// 		printf("line %d : %s", i + 1 , line);
// 	}
// 	// i++;
// 	// printf(ft_strjoin("mah", "moud"));



// 	// for (int i = 0; i<5; i++)
// 	// {
// 	// 	f("12");
// 	// }
// }




#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include "get_next_line.h"
#include <unistd.h>
#include <limits.h>
/*
	cd tests && cc -Wall -Wextra -Werror ../get_next_line*.c main.c
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./a.out
*/


int	main(void)
{

	// printf("%d", INT_MAX);
	int		fd;
	char	*line;
	int		i;

	fd = open("t.txt", O_RDONLY);
	if (fd < 0)
		return (1);
	i = 1;
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%d ->%s", i++, line);
		free(line);
	}
		// printf("%d ->%s", i++, line);
	close(fd);
	return (0);
}