/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <lferro@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:56:35 by lferro            #+#    #+#             */
/*   Updated: 2023/09/28 09:36:24 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	tot_len;
	char	*new_dst;

	src_len = strlen(src);
	dst_len = strlen(dst);
	tot_len = src_len + dst_len;
	if (size <= tot_len)
	{
		if (size > dst_len)
		{
			new_dst = malloc(sizeof(char) * size);
			dst = new_dst;
			new_dst = strncat(new_dst, src, size);
			strcpy(dst, new_dst);
			return (strlen(new_dst));
		}
		return (src_len + size);
	}
	new_dst = malloc(sizeof(char) * tot_len);
	dst = new_dst;
	new_dst = strncat(new_dst, src, tot_len + 1);
	strcpy(dst, new_dst);
	return (tot_len);
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
// 				return ERR;
// 			strcpy(ds[i], ids[i]);
// 		}
// }
