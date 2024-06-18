/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezkahavrankova <anezkahavrankova@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 14:51:36 by anezkahavra       #+#    #+#             */
/*   Updated: 2024/06/18 15:37:16 by anezkahavra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int    ft_split(char const *s, char c)
{
    int i;
    int k;
    char *temp;

    i = 0;
    while (s[i] != '\0')
    {
        k = 0;
        if (s[i] == c)
            k++;
    } i++;
    return (k);
}

int main(void)
{
    char const str[60] = "kdybych to byl byval tusil";
    char c = 'b';
    printf("%d", ft_split(str, c));
    return (0);
}