/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <lferro@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:01:41 by lferro            #+#    #+#             */
/*   Updated: 2023/10/09 13:30:16 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memset(void *s, int c, size_t n)
{
	size_t		i;
	char		*s_buf;

	s_buf = (char *)s;
	i = 0;
	while (i < n)
		s_buf[i++] = (char)c;
	s = (void *)s_buf;
}
