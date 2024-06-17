/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrank <ahavrank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 09:22:12 by anezkahavra       #+#    #+#             */
/*   Updated: 2024/06/17 20:26:06 by ahavrank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*temp;
	int		i;

	if (count == 0 || size == 0 || (count * size) / size != count)
		return (NULL);
	temp = (void *)malloc(count * size);
	if (temp == NULL)
		return (NULL);
	i = 0;
	while (i < count * size)
	{
		((unsigned char *)temp)[i] = 0;
		i++;
	}
	return (temp);
}

/* int main(void)
{
    size_t count = 3;
    size_t size = 0;
    printf("%p", ft_calloc(count, size));
    return (0);
}
 */
