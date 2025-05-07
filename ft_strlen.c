/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohasega <mohasega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 16:35:59 by mohasega          #+#    #+#             */
/*   Updated: 2025/05/06 16:54:00 by mohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

//#include <stdio.h>

//int	main(void)
//{
//	printf("長さ: %d\n", ft_strlen("Hello"));     // 5
//	printf("長さ: %d\n", ft_strlen(""));          // 0
//	printf("長さ: %d\n", ft_strlen("abcdefg"));   // 7
//	return (0);
//}
