/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <lferro@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 19:58:51 by lferro            #+#    #+#             */
/*   Updated: 2023/10/08 12:55:50 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != 0)
	{
		printf("%d", *(int *)lst->content);
		lst = lst->next;
		i++;
	}
	// printf("%d\n", i);
}

int main(void)
{
	int n1 = 12;
	int n2 = 34;
	int n3 = 56;
	int n4 = 78;
	int n5 = 90;
	t_list *node_n1 = ft_lstnew(&n1);
	t_list *node_n2 = ft_lstnew(&n2);
	t_list *node_n3 = ft_lstnew(&n3);
	t_list *node_n4 = ft_lstnew(&n4);
	t_list *node_n5 = ft_lstnew(&n5);

	ft_lstadd_front(&node_n1, node_n2);
	ft_lstadd_front(&node_n1, node_n3);
	ft_lstadd_front(&node_n1, node_n4);
	ft_lstadd_front(&node_n1, node_n5);

	ft_lstsize(node_n1);
	return (0);
}
