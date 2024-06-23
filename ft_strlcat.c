/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezkahavrankova <anezkahavrankova@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 00:04:03 by anezkahavra       #+#    #+#             */
/*   Updated: 2024/06/24 00:57:22 by anezkahavra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	int	sizeofdst;
	int	sizeofsrc;
	int	i;
	char *fin;

	i = 0;
	sizeofdst = ft_strlen(dst);
	sizeofsrc = ft_strlen(src);
	fin = dst;
	while (sizeofdst + i <= dstsize - 1 && src[i] != '\0')
	{
		
		fin[sizeofdst + i] = src[i];
		i++;
	}
	fin[i] = '\0';
	sizeofdst = ft_strlen(fin);
	return (sizeofdst);
}

int main(void)
{
    size_t dstsize = 15;
    char *dst = "hjakj";
    char *src = "kjabvavnav";
    printf("%d", ft_strlcat(dst, src, dstsize));
    return (0);
}