/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohasega <mohasega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 10:59:53 by mohasega          #+#    #+#             */
/*   Updated: 2025/04/29 11:18:20 by mohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

//#include <stdio.h>  // printf用
//#include "libft.h"  // ft_memcpyのプロトタイプ

//void	print_buffer(const char *buffer, size_t size)
//{
//	size_t i;
//	i = 0;
//	while (i < size)
//	{
//		if (buffer[i] == 0)
//			printf("\\0 "); // ゼロバイトは \0 と表示
//		else
//			printf("%c ", buffer[i]);
//		i++;
//	}
//	printf("\n");
//}

//int	main(void)
//{
//	char	src[6] = "abcde";
//	char	dest[6] = "";

//	printf("Before ft_memcpy:\n");
//	print_buffer(dest, 6);

//	ft_memcpy(dest, src, 5); // srcの5バイトをdestにコピー

//	printf("After ft_memcpy:\n");
//	print_buffer(dest, 6);

//	return (0);
//}
