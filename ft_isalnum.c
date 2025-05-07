/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohasega <mohasega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 15:14:37 by mohasega          #+#    #+#             */
/*   Updated: 2025/04/25 16:34:40 by mohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdight(c))
	{
		return (1);
	}
	return (0);
}

//#include <stdio.h>

//int	main(void)
//{
//	printf("A: %d\n", ft_isalnum('A'));
//	printf("1; %d\n", ft_isalnum(1));
//	printf(";; %d\n", ft_isalnum(';'));
//}
