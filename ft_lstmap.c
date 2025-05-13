/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohasega <mohasega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 13:41:53 by mohasega          #+#    #+#             */
/*   Updated: 2025/05/13 17:29:05 by mohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_mode;
	void	*content;

	new_lst = NULL;
	while (lst)
	{
		content = f(lst->content);
		new_mode = ft_lstnew(content);
		if (!new_mode)
		{
			ft_lstclear(&new_lst, del);
			del(content);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_mode);
		lst = lst->next;
	}
	return (new_lst);
}
