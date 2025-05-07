/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohasega <mohasega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 13:24:46 by mohasega          #+#    #+#             */
/*   Updated: 2025/05/05 13:40:55 by mohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	i = 0;
	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (i < n && ptr1[i] == ptr2[i])
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return (ptr1[i] - ptr2[i]);
}

//#include <stdio.h>
//#include <string.h>

//int main(void)
//{
//	char a[] = "Hello";
//	char b[] = "Helxo";

//	printf("memcmp:    %d\n", memcmp(a, b, 5));
//	printf("ft_memcmp: %d\n", ft_memcmp(a, b, 5));

//	return (0);
//}
