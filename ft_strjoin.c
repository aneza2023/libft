/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrank <ahavrank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 15:35:04 by anezkahavra       #+#    #+#             */
/*   Updated: 2024/06/17 18:35:25 by ahavrank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *temp;
    int     i;
    int     k;

    temp = (char*)malloc(ft_strlen(s1) + ft_strlen(s2) * sizeof(char));
    if (temp == NULL || ft_strlen(s1) + ft_strlen(s2) * sizeof(char) == SIZE_MAX)
        return (NULL);
    else if (temp != NULL && ft_strlen(s1) + ft_strlen(s2) * sizeof(char) < SIZE_MAX)
    {
        i = 0;
        while (s1[i] != '\0')
        {
            temp[i] = s1[i];
            i++;
        }
        k = 0;
        while (s2[k] != '\0')
        {
            temp[i] = s2[k];
            k++;
            i++;
        }
    }return (temp);
}

/* int main(void)
{
    char str1[50] = "kulajdu dela nejlepsi babicka";
    char str2[50] = " a pak hned deda";
    printf("%s", ft_strjoin(str1, str2));
    return (0);
} */
