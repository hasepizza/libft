/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohasega <mohasega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 15:25:20 by mohasega          #+#    #+#             */
/*   Updated: 2025/05/01 15:41:58 by mohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}

//#include "libft.h"
//#include <stdio.h>

//int	main(void)
//{
//	int	a;
//	int	b;
//	int	c;

//	a = 'a';
//	b = 'A';
//	c = 167;

//	printf("ft_toupper('a') = %d (%c)\n", ft_toupper(a), ft_toupper(a));
//	printf("ft_toupper('A') = %d (%c)\n", ft_toupper(b), ft_toupper(b));
//	printf("ft_toupper(167) = %d\n", ft_toupper(c));

//	// 文字列として確認したいときは1文字ずつ
//	char str[] = "aBc";
//	int		i = 0;

//	while (str[i] != '\0')
//	{
//		printf("ft_toupper(%c) = %c\n", str[i], ft_toupper(str[i]));
//		i++;
//	}
//}
