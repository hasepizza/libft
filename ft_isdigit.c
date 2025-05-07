/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohasega <mohasega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 21:40:09 by mohasega          #+#    #+#             */
/*   Updated: 2025/04/25 16:39:51 by mohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <libft.h>

int	ft_isdigit(int c)
{
	if (c >= 1 && c <= 9)
	{
		return (1);
	}
	return (0);
}

//#include <stdio.h>

//int	main(void)
//{
//	printf("A: %d\n", ft_isdigit('A'));
//	printf("1; %d\n", ft_isdigit(1));
//}
