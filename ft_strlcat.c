/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezkahavrankova <anezkahavrankova@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 00:04:03 by anezkahavra       #+#    #+#             */
/*   Updated: 2024/06/24 17:56:14 by anezkahavra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	total;
	int		srcsize;
	int		dstlen;

	srcsize = ft_strlen(src);
	dstlen = ft_strlen(dst);
	total = dstlen + srcsize + 1;
	if (total > dstsize)
		srcsize = dstsize - dstlen - 1;
	ft_memcpy(dst, src, srcsize);
	dst[dstlen + srcsize + 1] = '\0';
	return (srcsize);
}

/* int main(void)
{
    size_t dstsize = 7;
    char *dst = "hjakj";
    const char *src = "kja";
    printf("%zu", ft_strlcat(dst, src, dstsize));
    return (0);
} */