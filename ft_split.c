/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohasega <mohasega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 17:40:06 by mohasega          #+#    #+#             */
/*   Updated: 2025/05/06 18:41:50 by mohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	while (*s)
	{
		if (*s == c)
			in_word = 0;
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static char	*get_next_word(char const *s, char c, size_t *start)
{
	size_t	end;
	char	*word;

	while (s[*start] == c)
		(*start)++;
	end = *start;
	while (s[end] && s[end] != c)
		end++;
	word = ft_substr(s, *start, end - *start);
	*start = end;
	return (word);
}

static int	fill_words(char **result, const char *s, char c, int words)
{
	size_t	start;
	int		i;

	start = 0;
	i = 0;
	while (i < words)
	{
		result[i] = get_next_word(s, c, &start);
		if (!result[i])
		{
			while (i-- > 0)
				free(result[i]);
			return (0);
		}
		i++;
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	result = (char **)malloc((words + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	result[words] = NULL;
	if (!fill_words(result, s, c, words))
		return (NULL);
	return (result);
}

//#include <stdio.h>
//#include <stdlib.h>

//char	**ft_split(char const *s, char c);

//int	main(void)
//{
//	char	*str = " 42  is    bombastic  ";
//	char	**result;
//	int		i;

//	result = ft_split(str, ' ');
//	if (!result)
//	{
//		printf("ft_split returned NULL\n");
//		return (1);
//	}
//	i = 0;
//	while (result[i])
//	{
//		printf("result[%d] = \"%s\"\n", i, result[i]);
//		free(result[i]);
//		i++;
//	}
//	free(result);
//	return (0);
//}
