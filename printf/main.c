#include "ft_printf.h"
#include <stdio.h>

int main()
{
	//  int a = 5;
	// printf("c = %c\ns = %s\np = %p\nd = %di = %i \nu = %u\nx = %x\nX= %X \n-----------------\n", 'a' , "askdh", &a , 54894, 177 , 99999999999999, 888888888, 654568896);
	// ft_printf("c = %c\ns = %s\np = %p\nd = %di = %i \nu = %u\nx = %x\nX= %X \n-----------------\n", 'a' , "askdh", &a , 54894, 177 , 99999999999999, 888888888, 654568896);
	//ft_putchar('a');

	// ft_printf("%c", '0');
	// ft_printf(" %c ", '0');
	// ft_printf(" %c", '0' - 256);
	// ft_printf("%c ", '0' + 256);
	// ft_printf(" %c %c %c ", '0', 0, '1');
	// ft_printf(" %c %c %c ", ' ', ' ', ' ');
	// ft_printf(" %c %c %c ", '1', '2', '3');
	// ft_printf(" %c %c %c ", '2', '1', 0);
	// ft_printf(" %c %c %c ", 0, '1', '2');
	printf("%d",printf(NULL));
	// ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);

}
