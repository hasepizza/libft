/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohasega <mohasega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 15:34:56 by mohasega          #+#    #+#             */
/*   Updated: 2025/04/25 16:40:00 by mohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <libft.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}

//#include <stdio.h>

//int	main(void)
//{
//	printf("A;%d\n", ft_isascii('A'));
//	printf("1;%d\n", ft_isascii(1));
//	printf("128;%d\n", ft_isascii(128));
//}
