/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohasega <mohasega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 10:46:49 by mohasega          #+#    #+#             */
/*   Updated: 2025/04/29 10:58:49 by mohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}

//#include <stdio.h>  // printf用
//#include <string.h> // 比較用に本家bzeroも使う
//#include "libft.h"  // ft_bzeroのプロトタイプ

//void	print_buffer(const char *buffer, size_t size)
//{
//	size_t	i;

//	i = 0;
//	while (i < size)
//	{
//		if (buffer[i] == 0)
//			printf("\\0 "); // ゼロバイトは \0 って出す
//		else
//			printf("%c ", buffer[i]);
//		i++;
//	}
//	printf("\n");
//}

//int	main(void)
//{
//	char	buffer[10] = "abcdefghi";

//	printf("Before ft_bzero:\n");
//	print_buffer(buffer, 10);

//	ft_bzero(buffer + 3, 4); // 4バイトだけゼロにする！（d, e, f, gが対象）

//	printf("After ft_bzero:\n");
//	print_buffer(buffer, 10);

//	return (0);
//}
