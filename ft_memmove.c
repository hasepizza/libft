/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohasega <mohasega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 11:29:37 by mohasega          #+#    #+#             */
/*   Updated: 2025/05/01 14:14:09 by mohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (!dest && !src)
		return (NULL);
	if (s < d)
	{
		while (n--)
			d[n] = s[n];
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}

//#include <stdio.h>
//#include <string.h>
//#include "libft.h"

//void	print_buffer(const char *label, const char *buffer)
//{
//	printf("%s: ", label);
//	for (int i = 0; buffer[i]; i++)
//		putchar(buffer[i]);
//	putchar('\n');
//}

//int	main(void)
//{
//	char	buffer1[20] = "abcdefgh";
//	char	buffer2[20] = "abcdefgh";
//	char	buffer3[20] = "abcdefgh";

//	// 後ろから前へのコピー（重なりあり）
//	printf("Backward copy (overlap):\n");
//	print_buffer("Before", buffer1);
//	ft_memmove(buffer1 + 2, buffer1, 5);
//	print_buffer("After ", buffer1);
//	printf("\n");

//	// 前から後ろへのコピー（重なりなし）
//	printf("Forward copy (no overlap):\n");
//	print_buffer("Before", buffer2);
//	ft_memmove(buffer2, buffer2 + 2, 5);
//	print_buffer("After ", buffer2);
//	printf("\n");

//	// 同じポインタ同士のコピー
//	printf("Same pointer copy:\n");
//	print_buffer("Before", buffer3);
//	ft_memmove(buffer3, buffer3, 8);
//	print_buffer("After ", buffer3);
//	printf("\n");

//	return (0);
//}
