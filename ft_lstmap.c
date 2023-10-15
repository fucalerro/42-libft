/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <lferro@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 12:10:39 by lferro            #+#    #+#             */
/*   Updated: 2023/10/14 14:17:29 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*current;
	void	*new_content;

`	new_lst = 0;
	current = lst;
	while (current)
	{
		new_content = f(lst->content);
		current = ft_lstnew(new_content);
		ft_lstadd_back(current, new_lst);
		current->next = lst->next;
	}
}
