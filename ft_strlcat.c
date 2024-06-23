/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezkahavrankova <anezkahavrankova@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 00:04:03 by anezkahavra       #+#    #+#             */
/*   Updated: 2024/06/24 01:25:12 by anezkahavra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	int	i;
	int	total;

	i = 0;
	total = ft_strlen(dst) + ft_strlen(src);
	if (total >= dstsize)
		total = dstsize;
	if (total < dstsize)
		total = total + 1;
	while (i < dstsize - 1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	return (total);
}

int main(void)
{
    size_t dstsize = 15;
    char *dst = "hjakj";
    char *src = "kjab";
    printf("%d", ft_strlcat(dst, src, dstsize));
    return (0);
}