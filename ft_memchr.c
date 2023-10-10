/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <lferro@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:34:56 by lferro            #+#    #+#             */
/*   Updated: 2023/10/10 14:49:34 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*sc;

	sc = (char *)s;
	if (sc == NULL)
		return (NULL);
	while (n > 0)
	{
		if (*sc == (char)c)
			return (sc);
		sc++;
		n--;
	}
	return (NULL);
}
