/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezkahavrankova <anezkahavrankova@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 14:29:06 by anezkahavra       #+#    #+#             */
/*   Updated: 2024/06/17 15:33:15 by anezkahavra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *temp;
    int i;

    temp =(char*)malloc(len * sizeof(char));
    if (temp == NULL || len * sizeof(char) == SIZE_MAX)
        return (NULL);
    else if (temp != NULL && len * sizeof(char) < SIZE_MAX)
    {
        i = 0;
        while (i < len - 1 && s[start + 1] != '\0')
        {
            temp[i] = s[start + i]; 
            i++;        
        } temp[i] = '\0';
    } return (temp);
}

int main(void)
{
    char const str[50] = "gabina ma zase dovolenou";
    unsigned int start = 5;
    size_t len = 12 ;
    printf("%s", ft_substr(str, start, len));
    return (0);
}