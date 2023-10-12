/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <lferro@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:56:35 by lferro            #+#    #+#             */
/*   Updated: 2023/10/12 11:00:05 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

// unsigned int	ft_strlcat(char *dst, const char *src, size_t size)
// {
// 	unsigned int	s_len;
// 	unsigned int	d_len;
// 	unsigned int	tot_len;

// 	s_len = ft_strlen(src);
// 	d_len = ft_strlen(dst);
// 	tot_len = s_len + d_len;
// 	if (tot_len + 1 < size)
// 	{
// 		ft_strncat(dst, src, tot_len + 1);
// 		dst[tot_len] = 0;
// 		return (tot_len + 1);
// 	}
// 	else if (size != 0)
// 	{
// 		ft_strncat(dst, src, size - 1);
// 		dst[size - 1] = 0;
// 	}
// 	return (size - 1);
// }

unsigned int	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d_len;
	size_t	s_len;

	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	ft_strncat(dst, src, size);
	if (size < d_len)
		return (s_len + size);
	return (d_len + s_len);
}

// int main() {
//     char d1[5] = "abc";
// 	char d2[5] = "abc";

//     const char *s = "456789";
//     size_t n = 6;

//     size_t r1 = strlcat(d1, s, n);
//     size_t r2 = ft_strlcat(d2, s, n);

//     printf("na len:	%zu\n", r1);
//     printf("na str:	%s\n", d1);

// 	printf("ft len:	%zu\n", r2);
//     printf("ft str:	%s\n", d2);

//     return 0;
// }
