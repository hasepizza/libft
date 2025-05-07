/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohasega <mohasega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:20:16 by mohasega          #+#    #+#             */
/*   Updated: 2025/05/05 17:37:29 by mohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		j;
	void	*ptr;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	ptr = malloc(i + 1);
	if (!ptr)
		return (NULL);
	while (s[j] != '\0')
	{
		((char *)ptr)[j] = s[j];
		j++;
	}
	((char *)ptr)[j] = '\0';
	return (ptr);
}
