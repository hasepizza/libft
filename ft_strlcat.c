/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohasega <mohasega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 14:46:13 by mohasega          #+#    #+#             */
/*   Updated: 2025/05/05 12:29:43 by mohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	str_len(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_dest;
	size_t	len_src;
	size_t	i;

	len_dest = str_len(dest);
	len_src = str_len(src);
	if (size <= len_dest)
		return (size + len_src);
	i = 0;
	while (i < size - len_dest - 1 && src[i] != '\0')
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (len_dest + len_src);
}

//#include <stdio.h>
//#include <string.h>
//#include "libft.h" // ft_strlcatのプロトタイプがここにある前提

//void test_ft_strlcat(const char *src_input, size_t size)
//{
//	char dest1[50] = "Hello";
//	char dest2[50] = "Hello";
//	size_t ret;

//	printf("==== Test: size = %zu ====\n", size);
//	printf("Before:\n");
//	printf("dest: \"%s\"\nsrc: \"%s\"\n", dest1, src_input);

//	ret = ft_strlcat(dest1, src_input, size);
//	printf("After ft_strlcat:\n");
//	printf("dest: \"%s\"\nreturned: %zu\n", dest1, ret);

//	// 比較用: 本家strlcatが使える環境なら以下も活用
//	// size_t ret_sys = strlcat(dest2, src_input, size);
//	// printf("Expected dest: \"%s\"\nExpected return: %zu\n", dest2, ret_sys);

//	printf("\n");
//}

//int main(void)
//{
//	test_ft_strlcat(" World", 0);      // バッファサイズが0（destに何も追加できない）
//	test_ft_strlcat(" World", 10);     // バッファサイズがdestより小さい（切り詰めが発生）
//	test_ft_strlcat(" World", 20);     // 十分なバッファサイズ（全て結合できる）

//	return 0;
//}
