/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohasega <mohasega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 14:23:23 by mohasega          #+#    #+#             */
/*   Updated: 2025/05/06 17:34:46 by mohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (src[i] != '\0')
		i++;
	if (size == 0)
		return (i);
	j = 0;
	while (j < size - 1 && src[j] != '\0')
	{
		dest[j] = src [j];
		j++;
	}
	dest[j] = '\0';
	return (i);
}

//#include <stdio.h>
//#include <string.h>
//#include "libft.h"

//void	test_strlcpy(const char *src_input, size_t size)
//{
//	char dest[100];
//	size_t ret;

//	memset(dest, 'A', sizeof(dest));
//	ret = ft_strlcpy(dest, (char *)src_input, size);

//	printf("src: \"%s\", size: %zu\n", src_input, size);
//	if (size == 0)
//		printf("ft_strlcpy: skipped copy (size = 0), returned: %zu\n\n", ret);
//	else
//		printf("ft_strlcpy: copied: \"%s\", returned: %zu\n\n", dest, ret);
//}

//int	main(void)
//{
//	test_strlcpy("Hello, world!", 0);
//	test_strlcpy("Hello, world!", 5);
//	test_strlcpy("Hello, world!", 13);
//	test_strlcpy("Hello, world!", 100);
//	test_strlcpy("", 5);
//	return (0);
//}
