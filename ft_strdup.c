/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrank <ahavrank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 13:04:02 by anezkahavra       #+#    #+#             */
/*   Updated: 2024/06/17 18:33:24 by ahavrank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s1)
{
    char    *temp;
    int     i;

    temp = (char*)malloc((ft_strlen(s1) + 1) * sizeof(char));
    if (temp == NULL || (ft_strlen(s1) + 1) * sizeof(char) == SIZE_MAX)
        return (NULL);
    else if (temp != NULL && (ft_strlen(s1) + 1) * sizeof(char) < SIZE_MAX)
    {
        i = 0;
        while (i < ft_strlen(s1))
        {
            ((unsigned char *)temp)[i] = ((unsigned char *)s1)[i];
            i++;
	    }
    }
    return (temp);
}

/* int main(void)
{
    char str[50] = "hellou";
    printf("%s  ", ft_strdup(str));
    return (0);
} */
