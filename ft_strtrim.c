/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohasega <mohasega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 17:42:54 by mohasega          #+#    #+#             */
/*   Updated: 2025/05/06 17:42:58 by mohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*trimmed_str;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1) - 1;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	len = end - start + 1;
	trimmed_str = malloc(len - 1);
	if (!trimmed_str)
		return (NULL);
	ft_strlcpy(trimmed_str, (char *)(s1 + start), len + 1);
	return (trimmed_str);
}

//#include "libft.h"
//#include <stdio.h>

//int main(void)
//{
//    char *str1 = "  \t\nHello, World! \n\t  ";
//    char *set = " \t\n";
//    char *trimmed_str;

//    trimmed_str = ft_strtrim(str1, set);
//    if (trimmed_str)
//    {
//        printf("Original: '%s'\n", str1);
//        printf("Trimmed: '%s'\n", trimmed_str);
//        free(trimmed_str);
//    }
//    else
//    {
//        printf("Memory allocation failed!\n");
//    }
//    return (0);
//}
