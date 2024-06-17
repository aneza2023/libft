/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anezkahavrankova <anezkahavrankova@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 09:22:12 by anezkahavra       #+#    #+#             */
/*   Updated: 2024/06/17 13:00:13 by anezkahavra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    void *temp;
    int i;

    if (count * size < SIZE_MAX)
    {
        temp = (void*)malloc(count * size);
        if (temp == NULL)
            return (NULL);
        else if (temp != NULL)
        {
            i = 0;
            while (i < count * size)
            {
                ((unsigned int*)temp)[i] = 0;
                i++;
            }
        } return (temp);
    }
    else if (count * size > SIZE_MAX)
        return (NULL);
    
}

int main(void)
{
    size_t count = 3;
    size_t size = 2;
    printf("%p", ft_calloc(count, size));
    return (0);
}