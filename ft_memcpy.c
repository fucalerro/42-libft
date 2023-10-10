/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <lferro@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:52:13 by lferro            #+#    #+#             */
/*   Updated: 2023/10/10 14:45:22 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_buf;
	const unsigned char	*src_buf;

	dest_buf = (unsigned char *)dest;
	src_buf = (unsigned char *)src;
	while (n--)
		*dest_buf++ = *src_buf++;
	return (dest);
}
