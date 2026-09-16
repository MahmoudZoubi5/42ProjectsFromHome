/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahal-zo <mahal-zo@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 10:04:02 by mahal-zo          #+#    #+#             */
/*   Updated: 2026/09/16 18:05:25 by mahal-zo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <assert.h>

struct Point {
    int x;
    int y;
};


char *custom_strnstr(const char *haystack, const char *needle, size_t len) {
    size_t needle_len = strlen(needle);
    
    // An empty needle always returns the haystack
    if (needle_len == 0) {
        return (char *)haystack;
    }

    // Loop through haystack while we have enough characters left within 'len'
    for (size_t i = 0; haystack[i] != '\0' && (i + needle_len) <= len; i++) {
        if (strncmp(&haystack[i], needle, needle_len) == 0) {
            return (char *)&haystack[i];
        }
    }
    return NULL;
}

int	main(void)
{
	// test strlen 
//	printf ("isdigit = %ld\n", ft_strlen("kjhasjkd"));
//	printf ("isdigit = %ld\n", ft_strlen(""));
//	printf ("isdigit = %ld\n", ft_strlen("kjha sjkd"));
//	// test memset
//	
//	int a[4];
//	int val = 1;
//	memset(a , val , sizeof(a));
//	for (int i = 0; i < 4; i++)
//	{
//        	printf("%d ", a[i]);
//    	}
//	printf("\n------------------\n");
//	int b[4];
//	ft_memset(b , val , sizeof(b));
//	for (int i = 0; i < 4; i++)
//	{
//        	printf("%d ", b[i]);
//    	}

//	// test bzero 
//	int a[4];
//	bzero(a , sizeof(a));
//	for (int i = 0; i < 4; i++)
//	{
//        	printf("%d ", a[i]);
//    	}
//	printf("\n------------------\n");
//	int b[4];
//	ft_bzero(b , sizeof(b));
//	for (int i = 0; i < 4; i++)
//	{
//        	printf("%d ", b[i]);
//    	}

	// test memcpy
//	char source[] = "once upon a daydream...", dest[4];
//	ft_memcpy(dest, source, sizeof (dest));
//	for (int i = 0; i < 4 ; i++)
//		printf("%c ", dest[i]);
//
	// // test memmove

	// char csrc[100] = "mahmoud"; 
	// ft_memmove(csrc + 7, csrc, strlen(csrc)); 
	// printf("%s", csrc);


	//test strlcpy

	// char string[] = "Hello";
	// char buffer[19];
	// int r;

	// r = ft_strlcpy(buffer,string,0);

	// printf("Copied '%s' into '%s', length %d\n",
	// 		string,
	// 		buffer,
	// 		r
	// 	);

	// test strlcat

	// char destination[5] = "123";
	// const char *source = "456789";
	// size_t total_length;

	// printf("size of: %zu\n", sizeof(destination));
	// total_length = strlcat(destination, source, sizeof(destination));
	// printf("Concatenated string: %s\n", destination);
	// printf("Total length: %zu\n", total_length);

	// test strchr

	// char str[] = "GeeksforGeeks";

	// char *ptr = ft_strchr(str, 'e');

	// if (ptr != NULL)
	// 	printf("Character found at position: %ld\n", ptr - str);
	// else
	// 	printf("Character not found\n");

	// test strrchr

	// // initializing string
	// char str[] = "GeeksforGeeks";

	// // character to be searched
	// char chr = 'z';

	// // Storing pointer returned by
	// char* ptr = strrchr(str, chr);

	// // getting the position of the character
	// if (ptr) {
	// 	printf("Last occurrence of %c in %s is at index %ld",
	// 		chr, str, ptr - str);
	// }
	// // condition for character not present
	// else {
	// 	printf("%c is not present in %s ", chr, str);
	// }

	// test strncmp

	// char myStr1[] = "ABCF";
	// char myStr2[] = "AcCE";
	// int cmp = ft_strncmp(myStr1, myStr2, 5);
	// if (cmp > 0) {
	// printf("%s is greater than %s\n", myStr1, myStr2);
	// } else if (cmp < 0) {
	// printf("%s is greater than %s\n", myStr2, myStr1);
	// } else {
	// printf("%s is equal to %s\n", myStr1, myStr2);
	// }

	// test memchr

	// char data[] = "Hello, World!";
	// char *found = (char *)ft_memchr(data, 'H', 1);

	// if (found != NULL) {
	// 	printf("Found character at position: %ld\n", found - data);
	// } else {
	// 	printf("Character not found.\n");
	// }


	// test memcmp

	// char buffer1[] = "abcdef";
	// char buffer2[] = "abcdeg";

	// // Compare the first 5 bytes ("abcde" vs "abcde")
	// int result1 = ft_memcmp(buffer1, buffer2, 5);
	
	// // Compare the first 6 bytes ("abcdef" vs "abcdeg")
	// int result2 = ft_memcmp(buffer1, buffer2, 6);

	// printf("--- Buffer Comparison ---\n");
	// if (result1 == 0) {
	// 	printf("First 5 bytes are equal.\n");
	// } else {
	// 	printf("First 5 bytes are different.\n");
	// }

	// if (result2 < 0) {
	// 	printf("First 6 bytes: buffer1 is less than buffer2.\n\n");
	// }

	// // Example 2: Comparing structs
	// struct Point p1 = {10, 20};
	// struct Point p2 = {10, 20};
	// struct Point p3 = {15, 30};

	// printf("--- Struct Comparison ---\n");
	
	// // Compare p1 and p2
	// if (ft_memcmp(&p1, &p2, sizeof(struct Point)) == 0) {
	// 	printf("p1 and p2 contain the exact same data.\n");
	// } else {
	// 	printf("p1 and p2 are different.\n");
	// }

	// Compare p1 and p3
	// if (ft_memcmp(&p1, &p3, sizeof(struct Point)) == 0) {
	// 	printf("p1 and p3 contain the exact same data.\n");
	// } else {
	// 	printf("p1 and p3 are different.\n");
	// }

	// test strnstr

	// const char *haystack = "Apple, Banana, Cherry";
	// const char *needle = "Ban";
	// char *result;

	// // Example 1: Search limit is large enough to include "Banana"
	// // "Banana" starts at index 7, so searching 15 characters covers it.
	// result = ft_strnstr(haystack, needle, 15);
	// if (result != NULL) {
	// 	printf("Test 1: Found '%s' -> Remaining string: \"%s\"\n", needle, result);
	// } else {
	// 	printf("Test 1: '%s' not found within limit.\n", needle);
	// }

	// // Example 2: Search limit is too small
	// // Limiting search to the first 10 characters ("Apple, Ban") cuts it off.
	// result = ft_strnstr(haystack, needle, 9);
	// if (result != NULL) {
	// 	printf("Test 2: Found '%s'\n", needle);
	// } else {
	// 	printf("Test 2: '%s' not found within 10-character limit.\n", needle);
	// }

	// test atoi

	// char str1[] = "12345";
	// int num1 = ft_atoi(str1);
	// printf("String: \"%s\" -> Integer: %d\n", str1, num1);

	// // 2. String with a negative sign
	// char str2[] = "-987";
	// int num2 = ft_atoi(str2);
	// printf("String: \"%s\"   -> Integer: %d\n", str2, num2);

	// // 3. String with leading spaces and signs (ignored automatically)
	// char str3[] = "   +42";
	// int num3 = ft_atoi(str3);
	// printf("String: \"%s\" -> Integer: %d\n", str3, num3);

	// // 4. Partially valid string (stops at the first non-numeric character)
	// char str4[] = "123withText";
	// int num4 = ft_atoi(str4);
	// printf("String: \"%s\" -> Integer: %d\n", str4, num4);

	// // 5. Completely invalid string
	// char str5[] = "    +-2145hello123";
	// int num5 = ft_atoi(str5);
	// printf("String: \"%s\"  -> Integer: %d\n", str5, num5);

	// test substr 

	// char a[] = "mahmouad";
	// char *b = ft_substr(a ,1 ,100);
	// //for (int i =0;(size_t) i< ft_strlen(b); i++)
	// 	//printf("%c" , b[i]);
	// printf("ANS = %s" , b);

	//test strjoin

	// char a[100] = "mahmoud "; 
	// char b[100] = "mahmoud"; 
	// printf("%s", ft_strjoin(a, b));



	// test strtrim

	// char a[100] = " ....  . .. . m.ahmoud........    "; 
	// printf("%s", ft_strtrim(a, " ."));


	// test split

	//char *a = " ";
	char input[] = "   ---  --  ajksdflkaj -- dsalfj    99 aslk9988lakjdf    ";
	char **ans ;
	//int length;
	// while (*input)
	// 	printf ("input : %s\n", one_word(input, a));
	ans = ft_split(input, ' ');
	for (int i = 0; ans[i]; i++)
		printf("%s\n",ans[i]);
}
