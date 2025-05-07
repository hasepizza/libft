/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohasega <mohasega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 14:35:55 by mohasega          #+#    #+#             */
/*   Updated: 2025/05/07 15:59:41 by mohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_digit_count(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static char	*convert_num_to_str(char *str, int n, int len)
{
	unsigned int	num;

	str[len] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		num = -n;
	}
	else
		num = n;
	if (num == 0)
	{
		str[--len] = '0';
	}
	while (num > 0)
	{
		str[--len] = '0' + (num % 10);
		num /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		len;

	len = get_digit_count(n);
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	convert_num_to_str(ptr, n, len);
	return (ptr);
}

//#include <stdio.h>
//#include <stdlib.h>
//#include "libft.h"

//int	main(void)
//{
//	int		test_values[] = {0, 42, -42, 2147483647, -2147483648};
//	size_t	i;
//	char	*result;

//	for (i = 0; i < sizeof(test_values) / sizeof(test_values[0]); i++)
//	{
//		result = ft_itoa(test_values[i]);
//		if (result)
//		{
//			printf("ft_itoa(%d) = \"%s\"\n", test_values[i], result);
//			free(result);
//		}
//		else
//			printf("ft_itoa(%d) = NULL\n", test_values[i]);
//	}
//	return (0);
//}
