/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezkahavrankova <anezkahavrankova@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 15:58:07 by anezkahavra       #+#    #+#             */
/*   Updated: 2024/06/17 16:41:41 by anezkahavra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    char *temp;
    int i;
    int k;
    int j;

    i = 0;
    k = 0;
    j = 0;
    while (s1[i] != '\0')
    {
        while (set[k] != '\0')
        {
            if (s1[i] != set[k])
            {
                temp[j] = s1[i];
                k++;
                j++;
            }
            else if (set[k] == set[i])
                k++;
        }
        i++;
    }
    temp = (char*)malloc(ft_strlen(s1) * sizeof(char));
    if (temp == NULL || ft_strlen(s1) * sizeof(char) == SIZE_MAX)
        return (NULL);
    else if (temp != NULL && ft_strlen(s1) * sizeof(char) < SIZE_MAX)
    return (temp);
}

int main(void)
{
    char str[50] = "jkmkjmllkNAOMIjklmlkj";
    char set[50] = "jkm";
    printf("%s", ft_strtrim(str, set));
    return (0);
}
