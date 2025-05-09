/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohasega <mohasega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 13:33:36 by mohasega          #+#    #+#             */
/*   Updated: 2025/05/09 13:57:26 by mohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	result = (char *)malloc (sizeof(char) * (ft_strlen(s) + 1));
	if (!result)
		return (NULL);
	while (s[i] != '\0')
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
//char sample_f(unsigned int i, char c)
//{
//	return (c + i); // 'a' + 0 = 'a', 'b' + 1 = 'c' など
//}
//#include <stdio.h>
//int main(void)
//{
//	char *res = ft_strmapi("abcd", sample_f);
//	printf("%s\n", res); // 結果をチェック
//	free(res);
//}
