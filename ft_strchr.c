/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohasega <mohasega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 15:55:53 by mohasega          #+#    #+#             */
/*   Updated: 2025/05/06 17:31:34 by mohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

//#include <stdio.h>
//#include <string.h>
//#include "libft.h" // ft_strchrのプロトタイプが入ってると仮定

//void	test_strchr(const char *s, int c)
//{
//	char	*expected;
//	char	*actual;

//	expected = strchr(s, c);
//	actual = ft_strchr(s, c);
//	if (expected == actual)
//		printf("✅ OK: \"%s\", '%c'\n", s, c);
//	else
//	{
//		printf("❌ NG: \"%s\", '%c'\n", s, c);
//		printf("  expected: %p (%s)\n", (void *)expected, expected);
//		printf("  actual:   %p (%s)\n", (void *)actual, actual);
//	}
//}

//int	main(void)
//{
//	test_strchr("hello", 'l');
//	test_strchr("42Tokyo", 'T');
//	test_strchr("42Tokyo", 'z');
//	test_strchr("", 'a');
//	test_strchr("end\0hidden", '\0');
//	return (0);
//}
