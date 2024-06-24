/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezkahavrankova <anezkahavrankova@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 00:04:03 by anezkahavra       #+#    #+#             */
/*   Updated: 2024/06/24 11:38:28 by anezkahavra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	total;
	int	srcsize;

	srcsize = ft_strlen(src);
	total = ft_strlen(dst) + srcsize + 1;
	if (total >= dstsize)
		srcsize = dstsize - ft_strlen(dst) - 1;
	if (srcsize > 0)
		ft_memcpy(dst, src, srcsize);
	if (srcsize <= 0)
		srcsize = 0;
	dst[dstsize] = '\0';
	return (total);
}

int main(void)
{
    size_t dstsize = 12;
    char *dst = "hjakj";
    const char *src = "kjab";
    printf("%zu", ft_strlcat(dst, src, dstsize));
    return (0);
}