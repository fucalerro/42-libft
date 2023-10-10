/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <lferro@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:56:35 by lferro            #+#    #+#             */
/*   Updated: 2023/10/10 17:40:49 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	s_len;
	unsigned int	d_len;
	unsigned int	tot_len;

	s_len = ft_strlen(src);
	d_len = ft_strlen(dst);
	tot_len = s_len + d_len;
	if (tot_len + 1 < size)
	{
		ft_strncat(dst, src, tot_len + 1);
		dst[tot_len] = 0;
		return (tot_len + 1);
	}
	else if (size != 0)
	{
		ft_strncat(dst, src, size - 1);
		dst[size - 1] = 0;
	}
	return (size - 1);
}

// int main(void)
// {
// 	char *src1 = "4567";
// 	char *src2 = "";
// 	char *src3 = "12345678910";
// 	char is1[10] = "abc";
// 	char s1[10] = "abc";
// 	char is2[10] = "";
// 	char s2[10] = "";

// 	char *src[2] = {src1, src2};
// 	char *ds[2] = {s1, s2};
// 	char *ids[2] = {is1, is2};
// 	char *verif;

// for (int i = 0; i < 2; i++)
// 	for (int j = 0; j < 2; j++)
// 		for (int n = -1; n < 10; n++)
// 		{
// 			int lcat = strlcat(ds[i], src[j], n);
// 			strcpy(verif, ds[i]);
// 			strcpy(ds[i], ids[i]);
// 			int ftlcat = strlcat(ds[i], src[j], n);
// 			if (strcmp(verif, ds[i]) != 0 || ftlcat != lcat)
// 				return (1);
// 			strcpy(ds[i], ids[i]);
// 		}
// }
