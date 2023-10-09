/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <lferro@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 18:07:03 by lferro            #+#    #+#             */
/*   Updated: 2023/10/09 18:16:21 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


// void	ft_lstdelone(t_list **alst, void (*del)(void*, size_t))

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del((lst)->content);
	lst = NULL;
	free(lst);
}
