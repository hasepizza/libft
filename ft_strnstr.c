/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohasega <mohasega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 13:41:39 by mohasega          #+#    #+#             */
/*   Updated: 2025/05/05 16:10:50 by mohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] != '\0' && little[j] != '\0'
			&& big[i + j] == little[j] && (i + j) < len)
		{
			j++;
		}
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
//#include <stdio.h>
//#include <string.h>
//#include "libft.h"

//int	main(void)
//{
//	const char	*big = "Hello, world!";
//	const char	*little1 = "world";
//	const char	*little2 = "planet";
//	const char	*little3 = "";
//	size_t		len = 13;

//	// 成功するケース
//	printf("Test 1: %s\n", ft_strnstr(big, little1, len));  // "world!" が返るはずボム💣

//	// 失敗するケース
//	printf("Test 2: %s\n", ft_strnstr(big, little2, len));  // NULL が返るはずボム💣

//	// littleが空文字のケース
//	printf("Test 3: %s\n", ft_strnstr(big, little3, len));
// "Hello, world!" が返るはずボム💣

//	// len が短すぎて見つからないケース
//	printf("Test 4: %s\n", ft_strnstr(big, little1, 5));
// NULL が返るはずボム💣

//	return (0);
//}
