/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohasega <mohasega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 16:23:15 by mohasega          #+#    #+#             */
/*   Updated: 2025/05/06 16:55:04 by mohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*ptr;

	i = 0;
	j = 0;
	ptr = malloc (ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!ptr)
		return (NULL);
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		ptr[i + j] = s2[j];
		j++;
	}
	ptr[i + j] = '\0';
	return (ptr);
}

//#include <stdio.h>
//#include <stdlib.h>
//#include "libft.h"

//int	main(void)
//{
//	char	*s1 = "Hello, ";
//	char	*s2 = "world!";
//	char	*result;

//	result = ft_strjoin(s1, s2);
//	if (result == NULL)
//	{
//		printf("malloc failed!\n");
//		return (1);
//	}
//	printf("s1: \"%s\"\n", s1);
//	printf("s2: \"%s\"\n", s2);
//	printf("joined: \"%s\"\n", result);

//	// 忘れずに free
//	free(result);
//	return (0);
//}
