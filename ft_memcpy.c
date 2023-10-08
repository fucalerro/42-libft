/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <lferro@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:52:13 by lferro            #+#    #+#             */
/*   Updated: 2023/09/21 11:57:39 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dest_buf;
	const char	*src_buf;

	dest_buf = (char *)dest;
	src_buf = (char *)src;
	if (dest_buf != NULL && src_buf != NULL)
		while (n--)
			*dest_buf++ = *src_buf++;
	dest = (void *)dest_buf;
	return (dest);
}
