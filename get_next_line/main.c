#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>


char	*get_next_line(int fd);


int main()
{
	int num = open("t.txt", O_RDONLY);

	for (int i = 0 ; i < 4 ; i++)
	printf("line %d = %s \n", i + 1 , get_next_line(num));
}